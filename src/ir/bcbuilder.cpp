//
// Created by manta on 11/10/22.
//

#include "../../include/ir/bcbuilder.h"

llvm::Constant *BCBuilder::asConstant(int n) {
    return llvm::ConstantInt::get(module->getContext(), llvm::APInt(32, n, false));
}

llvm::Value *BCBuilder::CreateNumber(bstd::Number *number, std::string &name, bool global) {

    // Create instance of Number struct
    llvm::StructType *number_struct_type = module->getNumberStructType();
    llvm::Value *alloc;
    if (global) {
        // we should allocate global memory
        alloc = new llvm::GlobalVariable(number_struct_type, false,
                                         llvm::GlobalValue::CommonLinkage, /*todo: initializer*/nullptr, name,
                                         llvm::GlobalValue::NotThreadLocal, 4, false);
    } else {
        // we should allocate local memory
        alloc = this->CreateAlloca(number_struct_type, nullptr, "tmp" + name);
    }

    std::vector<llvm::Value *> indices(6);
    indices[0] = asConstant(0);
    indices[1] = asConstant(0);
    indices[2] = asConstant(1);
    indices[3] = asConstant(2);
    indices[4] = asConstant(3);
    indices[5] = asConstant(4);

    // store "value" field of struct
    llvm::Value *value_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[1]}, "valuePtr");
    llvm::Value *val = llvm::ConstantInt::get(module->getContext(), llvm::APInt(64, number->value, false));
    this->CreateStore(val, value_ptr);

    // store "scale" field of struct
    llvm::Value *scale_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[2]}, "scalePtr");
    llvm::Value *sca = llvm::ConstantInt::get(module->getContext(), llvm::APInt(64, number->scale, false));
    this->CreateStore(sca, scale_ptr);

    // store "length" field of struct
    llvm::Value *length_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[3]}, "lengthPtr");
    llvm::Value *length = llvm::ConstantInt::get(module->getContext(), llvm::APInt(8, number->length, false));
    this->CreateStore(length, length_ptr);

    // store "isSigned" field of struct
    llvm::Value *is_signed_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[4]}, "isSignedPtr");
    llvm::Value *is_signed = llvm::ConstantInt::get(module->getContext(),
                                                    llvm::APInt(1, number->isSigned ? 1 : 0, false));
    this->CreateStore(is_signed, is_signed_ptr);

    // store "positive" field of struct
    llvm::Value *positive_ptr = this->CreateGEP(number_struct_type, alloc, {indices[0], indices[5]}, "positivePtr");
    llvm::Value *positive = llvm::ConstantInt::get(module->getContext(),
                                                   llvm::APInt(1, number->positive ? 1 : 0, false));
    this->CreateStore(positive, positive_ptr);

    return alloc;
}

llvm::Value* BCBuilder::CreateAdd(bstd::Number* lhs, bstd::Number* rhs) {
    return nullptr; // todo: implement
}
