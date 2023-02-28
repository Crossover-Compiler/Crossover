//
// Created by manta on 11/10/22.
//

#include <iostream>
#include "../../include/ir/bcbuilder.h"
#include "../../include/utils/utils.h"

llvm::Constant *BCBuilder::asConstant(int n) {
    return llvm::ConstantInt::get(module->getContext(), llvm::APInt(32, n, true));
}

llvm::Value *BCBuilder::CreateNumber(bstd_number *number, std::string &name, bool global) {
    return CreateNumberValue(name, number->value, number->scale, number->length, number->isSigned, number->positive, global);
}

llvm::Value *BCBuilder::CreatePicture(bstd_Picture* picture, std::string &name, bool global) {

    // picture struct types
    llvm::Type* int8_t = llvm::IntegerType::getInt8Ty(this->getContext());
    llvm::Type* int8ptr_t = llvm::IntegerType::getInt8PtrTy(this->getContext());
    llvm::ArrayType* char_array_type = llvm::ArrayType::get(int8_t, picture->length);

    // Create instance of Picture struct
    llvm::ArrayRef<llvm::Type*>* picture_struct_types = new llvm::ArrayRef(new llvm::Type*[]{
            char_array_type,// bytes
            char_array_type,// mask
            int8_t,         // length
    }, 3);
    llvm::StructType* picture_struct_type = llvm::StructType::create(this->getContext(), *picture_struct_types, "Struct." + name);

    llvm::Value *alloc;
    if (global || true) {
        // we should allocate global memory
        llvm::Constant* zeroInit = llvm::ConstantAggregateZero::get(picture_struct_type);
        alloc = new llvm::GlobalVariable(*(llvm::Module*)module, picture_struct_type, false,
                                         llvm::GlobalVariable::CommonLinkage, zeroInit, name,
                                         nullptr, llvm::GlobalValue::NotThreadLocal, 4, false);
    } else {
        // we should allocate local memory
        alloc = this->CreateAlloca(picture_struct_type, nullptr, "tmp" + name);
    }

    std::vector<llvm::Value *> indices(4);
    indices[0] = asConstant(0);
    indices[1] = asConstant(0);
    indices[2] = asConstant(1);
    indices[3] = asConstant(2);

    // transform bytes to values
    std::vector<llvm::Constant*> bytes;
    bytes.reserve(picture->length);
    for (int i = 0; i < picture->length; ++i) {
        auto b = llvm::ConstantInt::get(int8_t, picture->bytes[i], false);
        bytes.push_back(b);
    }

    // store "bytes" field of struct
    llvm::Value* bytes_ptr = this->CreateGEP(picture_struct_type, alloc, {indices[0], indices[1]}, "bytesPtr");
    llvm::Value* bytes_val = llvm::ConstantArray::get(char_array_type, bytes);
    this->CreateStore(bytes_val, bytes_ptr);

    // transform mask to values
    std::vector<llvm::Constant*> mask;
    mask.reserve(picture->length);
    for (int i = 0; i < picture->length; ++i) {
        auto m = llvm::ConstantInt::get(int8_t, picture->mask[i], false);
        mask.push_back(m);
    }

    // store "bytes" field of struct
    llvm::Value* mask_ptr = this->CreateGEP(picture_struct_type, alloc, {indices[0], indices[2]}, "maskPtr");
    llvm::Value* mask_val = llvm::ConstantArray::get(char_array_type, mask);
    this->CreateStore(mask_val, mask_ptr);

    // store "length" field of struct
    llvm::Value *length_ptr = this->CreateGEP(picture_struct_type, alloc, {indices[0], indices[3]}, "lengthPtr");
    llvm::Value *length = llvm::ConstantInt::get(module->getContext(), llvm::APInt(8, picture->length, false));
    this->CreateStore(length, length_ptr);

    return alloc;
}

llvm::Value* BCBuilder::CreateAdd(bstd_number* lhs, bstd_number* rhs) {
    return nullptr; // todo: implement
}

llvm::Value *BCBuilder::CreateNumber(BabyCobolParser::IntLiteralContext *context) {
    std::string intText =  context->int_()->getText();
    std::string name = "int" + std::to_string(LiteralCount);
    LiteralCount++;
    uint64_t m_scale = 0;
    uint8_t m_length = intText.length();
    bool m_isSigned = false;
    bool m_isPositive = false;

    if (intText.find('-') != std::string::npos) {
        //found
        m_isSigned = true;
        m_length--;
        intText.erase(remove(intText.begin(), intText.end(), '-'), intText.end());
    }
    if (intText.find('+') != std::string::npos) {
        //found
        m_isSigned = true;
        m_isPositive = true;
        m_length--;
        intText.erase(remove(intText.begin(), intText.end(), '+'), intText.end());
    }

    std::cout << "Creating uint64_t from: " << intText << std::endl;
    uint64_t m_value = std::stoi(intText);

    return CreateNumberValue(name, m_value, m_scale, m_length, m_isSigned, m_isPositive, false);
}

llvm::Value *BCBuilder::CreateNumber(BabyCobolParser::DoubleLiteralContext *context) {
    std::string doubleText =  context->DOUBLE()->getText();

    std::string name = "double" + std::to_string(LiteralCount);
    LiteralCount++;
    uint64_t m_scale = utils::split(doubleText, ",").at(1).length();
    uint8_t m_length = doubleText.length() - 1;
    bool m_isSigned = false;            // - 1 for ',' character
    bool m_isPositive = false;

    if (doubleText.find('-') != std::string::npos) {
        //found
        m_isSigned = true;
        m_length--;
        doubleText.erase(remove(doubleText.begin(), doubleText.end(), '-'), doubleText.end());
    }
    if (doubleText.find('+') != std::string::npos) {
        //found
        m_isSigned = true;
        m_isPositive = true;
        m_length--;
        doubleText.erase(remove(doubleText.begin(), doubleText.end(), '+'), doubleText.end());
    }
    doubleText.erase(remove(doubleText.begin(), doubleText.end(), ','), doubleText.end());
    uint64_t m_value = std::stoi(doubleText);

    return CreateNumberValue(name, m_value, m_scale, m_length, m_isSigned, m_isPositive, false);
}

llvm::Value * BCBuilder::CreateNumberValue(const std::string& name, uint64_t m_value, uint64_t m_scale, uint8_t m_length, bool m_isSigned, bool m_isPositive, bool global) {
    // Create instance of Number struct
    llvm::StructType *number_struct_type = module->getNumberStructType();
    llvm::Value *alloc;

    if (global) {
        std::cout << "Creating global var: " << name << std::endl;
        // we should allocate global memory
        llvm::Constant* zeroInit = llvm::ConstantAggregateZero::get(number_struct_type);
        alloc = new llvm::GlobalVariable(*(llvm::Module*)module, number_struct_type, false,
                                         llvm::GlobalVariable::CommonLinkage, zeroInit, name,
                                         nullptr, llvm::GlobalValue::NotThreadLocal, 4, false);
    } else {
        std::cout << "Creating local var: " << name << std::endl;
        // we should allocate local memory
        alloc = this->CreateAlloca(number_struct_type, nullptr, "tmp" + name);
    }

    std::vector<llvm::Value *> indices(7);
    indices[0] = asConstant(0);
    indices[1] = asConstant(0);
    indices[2] = asConstant(1);
    indices[3] = asConstant(1);
    indices[4] = asConstant(2);
    indices[5] = asConstant(3);
    indices[6] = asConstant(4);

    // store "value" field of struct
    llvm::Value *value_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[0]}, "valuePtr");
    llvm::Value *val = llvm::ConstantInt::get(module->getContext(), llvm::APInt(64, m_value, false));

    this->CreateStore(val, value_ptr);

    // store "scale" field of struct
    llvm::Value *scale_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[2]}, "scalePtr");
    llvm::Value *sca = llvm::ConstantInt::get(module->getContext(), llvm::APInt(64, m_scale, false));

    this->CreateStore(sca, scale_ptr);

    // store "length" field of struct
    llvm::Value *length_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[4]}, "lengthPtr");
    llvm::Value *length = llvm::ConstantInt::get(module->getContext(), llvm::APInt(32, m_length, false));
    this->CreateStore(length, length_ptr);

    // store "isSigned" field of struct
    llvm::Value *is_signed_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[5]}, "isSignedPtr");
    llvm::Value *is_signed = llvm::ConstantInt::get(module->getContext(),
                                                    llvm::APInt(8, m_isSigned ? 1 : 0, false));
    this->CreateStore(is_signed, is_signed_ptr);

    // store "positive" field of struct
    llvm::Value *positive_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[6]}, "positivePtr");
    llvm::Value *positive = llvm::ConstantInt::get(module->getContext(),
                                                   llvm::APInt(8, m_isPositive ? 1 : 0, false));
    this->CreateStore(positive, positive_ptr);

    return alloc;
}

llvm::Value* BCBuilder::CreateNumberToIntPtrCall(llvm::Value *number) {

    llvm::IntegerType *int_t = llvm::Type::getInt64Ty(this->getContext());
    llvm::ConstantInt* const_i64 = llvm::ConstantInt::get(int_t, 64);

    auto num_to_int = module->getMarshallIntFunc();

    llvm::ArrayRef<llvm::Value *> args = number;
    llvm::Value *return_value = this->CreateCall(*num_to_int, args);

    // allocate memory...
    auto alloc = this->CreateAlloca(int_t);
    // ... mark allocation as alive...
    this->CreateLifetimeStart(alloc, const_i64);
    // ... and assign marshalled representation to allocated memory.
    this->CreateStore(return_value, alloc);

    return alloc;
}
