//
// Created by manta on 11/10/22.
//

#include "../include/bcbuilder.h"

Value* BCBuilder::CreateNumber(Number* number, std::string& name) {

    // Create instance of Number struct
    llvm::StructType* number_struct_type = bcModule->getNumberStructType();
    llvm::AllocaInst* alloc;
    if (record == nullptr) {
        // we should allocate global memory
        alloc = builder->CreateAlloca(number_struct_type, nullptr, this->name); // todo: make global
    } else {
        // we should allocate local memory
        alloc = builder->CreateAlloca(number_struct_type, nullptr, "tmp" + this->name);
    }

    std::vector<llvm::Value*> indices(6);
    indices[0] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 0, isSigned));
    indices[1] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 0, isSigned));
    indices[2] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 1, isSigned));
    indices[3] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 2, isSigned));
    indices[4] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 3, isSigned));
    indices[5] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 4, isSigned));

    // store "value" field of struct
    llvm::Value* value_ptr = builder->CreateGEP(number_struct_type, alloc, {indices[0], indices[1]}, "valuePtr");
    llvm::Value* val = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(64, number->value, false));
    builder->CreateStore(val, value_ptr);

    // store "scale" field of struct
    llvm::Value* scale_ptr = builder->CreateGEP(number_struct_type, alloc, {indices[0], indices[2]}, "scalePtr");
    llvm::Value* sca = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(64, number->scale, false));
    builder->CreateStore(sca, scale_ptr);

    // store "length" field of struct
    llvm::Value* length_ptr = builder->CreateGEP(number_struct_type, alloc, {indices[0], indices[3]}, "lengthPtr");
    llvm::Value* length = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(8, number->length, false));
    builder->CreateStore(length, length_ptr);

    // store "isSigned" field of struct
    llvm::Value* is_signed_ptr = builder->CreateGEP(number_struct_type, alloc, {indices[0], indices[4]}, "isSignedPtr");
    llvm::Value* is_signed = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(1, number->is_signed ? 1 : 0, false));
    builder->CreateStore(is_signed, is_signed_ptr);

    // store "positive" field of struct
    llvm::Value* positive_ptr = builder->CreateGEP(number_struct_type, alloc, {indices[0], indices[5]}, "positivePtr");
    llvm::Value* positive = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(1, number->positive ? 1 : 0, false));
    builder->CreateStore(positive, positive_ptr);

    return alloc;
}
