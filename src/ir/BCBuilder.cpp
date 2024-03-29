#include <iostream>
#include "../../include/ir/BCBuilder.h"
#include "../../include/utils/Utils.h"

llvm::Constant *BCBuilder::asConstant(int n) {
    return llvm::ConstantInt::get(module->getContext(), llvm::APInt(32, n, true));
}

llvm::Value* BCBuilder::CreateString(std::string& string) {

    auto charType = llvm::Type::getInt8Ty(this->getContext());
    auto int64Type = llvm::Type::getInt64Ty(this->getContext());
    auto length = llvm::ConstantInt::get(int64Type, string.length() + 1, false); // space for a null terminator

    auto alloc = this->CreateAlloca(charType, length, "s_lit");

    // create string literal character array
    auto charVector = std::vector<char>(string.begin(), string.end());
    charVector.push_back('\0'); // null-terminator

    // populate allocated char*
    auto bytes = llvm::ConstantDataArray::get(this->getContext(), charVector);
    this->CreateStore(bytes, alloc);

    return alloc;
}

llvm::Value *BCBuilder::CreateNumber(bstd_number *number, std::string &name, bool global) {
    return CreateNumberValue(name, number->value, number->scale, number->length, number->isSigned, number->positive, global);
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

    uint64_t m_value = std::stoi(intText);

    return CreateNumberValue(name, m_value, m_scale, m_length, m_isSigned, m_isPositive, true);
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

    return CreateNumberValue(name, m_value, m_scale, m_length, m_isSigned, m_isPositive, true);
}

llvm::Value * BCBuilder::CreateNumberValue(const std::string& name, uint64_t m_value, uint64_t m_scale, uint8_t m_length, bool m_isSigned, bool m_isPositive, bool global) {

    // Create instance of Number struct
    llvm::StructType *number_struct_type = module->getNumberStructType();
    llvm::Value *alloc;

    if (global) {
        // we should allocate global memory
        llvm::Constant* zeroInit = llvm::ConstantAggregateZero::get(number_struct_type);
        alloc = new llvm::GlobalVariable(*(llvm::Module*)module, number_struct_type, false,
                                         llvm::GlobalVariable::InternalLinkage, zeroInit, name,
                                         nullptr, llvm::GlobalValue::NotThreadLocal, 0, false);
    } else {
        // we should allocate local memory
        alloc = this->CreateAlloca(number_struct_type, nullptr, name);
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
    llvm::Value *value_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[1]}, "valuePtr");
    llvm::Value *val = llvm::ConstantInt::get(module->getContext(), llvm::APInt(64, m_value, false));

    this->CreateStore(val, value_ptr);

    // store "scale" field of struct
    llvm::Value *scale_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[2]}, "scalePtr");
    llvm::Value *sca = llvm::ConstantInt::get(module->getContext(), llvm::APInt(64, m_scale, false));

    this->CreateStore(sca, scale_ptr);

    // store "length" field of struct
    llvm::Value *length_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[4]}, "lengthPtr");
    llvm::Value *length = llvm::ConstantInt::get(module->getContext(), llvm::APInt(8, m_length, false));
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

llvm::Value* BCBuilder::CreatePictureToCStrCall(llvm::Value* picture) {

    auto pic_to_cstr = module->getPictureToCStrFunc();

    llvm::ArrayRef<llvm::Value *> args = picture;
    return this->CreateCall(*pic_to_cstr, args);
}

llvm::Value* BCBuilder::CreateCStrToPictureCall(llvm::Value* picture, llvm::Value* str) {

    auto assign_cstr_to_pic = module->getAssignCStrFunc();

    llvm::ArrayRef<llvm::Value *> args = { picture, str };
    return this->CreateCall(*assign_cstr_to_pic, args);
}

llvm::Value* BCBuilder::CreateNumberToIntCall(llvm::Value *number) {

    auto num_to_int = module->getMarshallIntFunc();

    llvm::ArrayRef<llvm::Value *> args = number;
    return this->CreateCall(*num_to_int, args);
}

llvm::Value* BCBuilder::CreateNumberToDoubleCall(llvm::Value *number) {

    auto num_to_double = module->getMarshallDoubleFunc();

    llvm::ArrayRef<llvm::Value *> args = number;
    return this->CreateCall(*num_to_double, args);
}

void BCBuilder::CreateAssignIntToNumber(llvm::Value* number, int value) {

    llvm::IntegerType *int_t = llvm::Type::getInt64Ty(this->getContext());
    llvm::ConstantInt* val = llvm::ConstantInt::get(int_t, value);

    CreateAssignIntToNumber(number, val);
}

void BCBuilder::CreateAssignIntToNumber(llvm::Value* number, llvm::Value* value) {

    auto assign_int = module->getAssignIntFunc();

    llvm::ArrayRef<llvm::Value *> args = { number, value };
    this->CreateCall(*assign_int, args);
}

void BCBuilder::CreateAssignDoubleToNumber(llvm::Value* number, llvm::Value* value) {

    auto assign_double = module->getAssignDoubleFunc();

    llvm::ArrayRef<llvm::Value *> args = { number, value };
    this->CreateCall(*assign_double, args);
}

void BCBuilder::CreateAssignCStrToPicture(llvm::Value* picture, llvm::Value* value) {

    auto assign_cstr = module->getAssignCStrFunc();

    llvm::ArrayRef<llvm::Value *> args = { picture, value };
    this->CreateCall(*assign_cstr, args);
}

void BCBuilder::CreateAddIntToNumber(llvm::Value* number, llvm::Value* value) {
    auto add_int = module->getAddIntFunc();

    llvm::ArrayRef<llvm::Value *> args = { number, value };
    this->CreateCall(*add_int, args);
}

void BCBuilder::CreateAssignNumberToNumber(llvm::Value* number_ptr, llvm::Value* value_ptr) {

    auto assign_func = module->assign_number_func;

    llvm::ArrayRef<llvm::Value *> args = { number_ptr, value_ptr };
    this->CreateCall(*assign_func, args);
}

void BCBuilder::CreateAssignPictureToPicture(llvm::Value* picture_ptr, llvm::Value* value_ptr) {

    auto assign_func = module->assign_picture_func;

    llvm::ArrayRef<llvm::Value *> args = { picture_ptr, value_ptr };
    this->CreateCall(*assign_func, args);
}

llvm::Value *BCBuilder::CreatePicture(BabyCobolParser::StringLiteralContext *context) {
    // Create picture from string literal as mask = XXX...
    string value = context->LITERAL()->getText().substr(1, context->LITERAL()->getText().size() - 2);

    char* mask = new char[value.length()];
    for (int i = 0; i < value.length(); i++) {
        mask[i] = 'X';
    }

    unsigned char *bytes = new unsigned char[value.length()];
    for (int i = 0; i < value.length(); i++) {
        bytes[i] = value[i];
    }

    std::string name = "string" + std::to_string(LiteralCount);
    LiteralCount++;
    return CreatePicture(name, bytes, mask, (std::uint8_t) value.length(), false);
}

llvm::Value *BCBuilder::CreatePicture(bstd_picture* picture, std::string &name, bool global) {
    return CreatePicture(name, picture->bytes, picture->mask, picture->length, global);
}

llvm::Value *BCBuilder::CreatePicture(const std::string& name, unsigned char* m_bytes, char* m_mask, uint8_t m_length, bool global) {

    // picture struct types
    llvm::Type* int8_t = llvm::IntegerType::getInt8Ty(this->getContext());
    llvm::ArrayType* byte_array_type = llvm::ArrayType::get(int8_t, m_length);
    llvm::Value* picture_length = asConstant(m_length);

    llvm::StructType* picture_struct_type = module->getPictureStructType();

    llvm::Value *alloc;
    if (global) {
        // we should allocate global memory
        llvm::Constant* zeroInit = llvm::ConstantAggregateZero::get(picture_struct_type);
        alloc = new llvm::GlobalVariable(*(llvm::Module*)module, picture_struct_type, false,
                                         llvm::GlobalVariable::InternalLinkage, zeroInit, name,
                                         nullptr, llvm::GlobalValue::NotThreadLocal, 0, false);
    } else {
        // we should allocate local memory
        alloc = this->CreateAlloca(picture_struct_type, nullptr, "tmp" + name);
    }

    std::vector<llvm::Value *> indices(3);
    indices[0] = asConstant(0);
    indices[1] = asConstant(1);
    indices[2] = asConstant(2);

    // transform bytes to values
    std::vector<llvm::Constant*> bytes;
    bytes.reserve(m_length);
    for (int i = 0; i < m_length; ++i) {
        auto b = llvm::ConstantInt::get(int8_t, m_bytes[i], false);
        bytes.push_back(b);
    }

    // store "bytes" field of struct
    llvm::Value* bytes_ptr = this->CreateGEP(picture_struct_type, alloc, {indices[0], indices[0]}, "bytesPtr");
    auto bytes_alloc = this->CreateAlloca(int8_t, 0, picture_length, "bytesAlloc"); // todo: fix address space
    llvm::Value* bytes_val = llvm::ConstantArray::get(byte_array_type, bytes);
    this->CreateStore(bytes_val, bytes_alloc);
    this->CreateStore(bytes_alloc, bytes_ptr);

    // transform mask to values
    std::vector<llvm::Constant*> mask;
    mask.reserve(m_length);
    for (int i = 0; i < m_length; ++i) {
        auto m = llvm::ConstantInt::get(int8_t, m_mask[i], false);
        mask.push_back(m);
    }

    // store "mask" field of struct
    llvm::Value* mask_ptr = this->CreateGEP(picture_struct_type, alloc, {indices[0], indices[1]}, "maskPtr");
    auto mask_alloc = this->CreateAlloca(int8_t, 0, picture_length, "maskAlloc"); // todo: fix address space
    llvm::Value* mask_val = llvm::ConstantArray::get(byte_array_type, mask);
    this->CreateStore(mask_val, mask_alloc);
    this->CreateStore(mask_alloc, mask_ptr);

    // store "length" field of struct
    llvm::Value *length_ptr = this->CreateGEP(picture_struct_type, alloc, {indices[0], indices[2]}, "lengthPtr");
    llvm::Value *length = llvm::ConstantInt::get(module->getContext(), llvm::APInt(8, m_length, false));
    this->CreateStore(length, length_ptr);

    return alloc;
}

llvm::Function* BCBuilder::CreateProcedure(llvm::FunctionType* function_type, llvm::GlobalValue::LinkageTypes linkage_type, std::string& procedure_name) {

    // procedure names are lower case
    std::transform(procedure_name.begin(), procedure_name.end(), procedure_name.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    auto function = llvm::Function::Create(function_type, linkage_type, procedure_name, *this->module);

    this->module->function_shadow_symbol_table.insert({procedure_name, function});

    return function;
}