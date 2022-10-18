//
// Created by bruh on 10/17/22.
//

#include "Field.h"

llvm::Value* Field::codegen(IRBuilder<>* builder, BCModule* bcModule, Record* record) {

    uint64_t value = std::stoi(this->value);
    uint64_t scale = 0; // todo: add to grammar
//    uint64_t length;
//    uint64_t digits;
    bool isSigned = false; // todo: have include "signed" in grammar!
//    bool positive = true;

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
    llvm::Value* val = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(64, value, isSigned));
    builder->CreateStore(val, value_ptr);

    // store "scale" field of struct
    llvm::Value* scale_ptr = builder->CreateGEP(number_struct_type, alloc, {indices[1], indices[2]}, "scalePtr");
    llvm::Value* sca = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(64, scale, isSigned));
    builder->CreateStore(sca, scale_ptr);

    // store "scale" field of struct
    llvm::Value* is_signed_ptr = builder->CreateGEP(number_struct_type, alloc, {indices[2], indices[3]}, "isSignedPtr");
    llvm::Value* is_signed = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(1, is_signed ? 1 : 0, isSigned));
    builder->CreateStore(is_signed, scale_ptr);

    // todo: do the rest of the fields

    // print number
    auto f = bcModule->getPrintNumber();
    auto r = builder->CreateCall(*f, {alloc}, "callPrintNumber");

    return alloc;
}
