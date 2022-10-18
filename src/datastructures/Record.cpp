//
// Created by bruh on 10/17/22.
//

#include "Record.h"

llvm::Type* getType(llvm::Value* value) {
    return value->getType();
}

llvm::Value* Record::codegen(IRBuilder<>* builder, BCModule* bcModule, Record* record) {

    // code gen all children, generate struct for this record, and insert the children into this struct.

    std::vector<llvm::Value*> values;
    values.reserve(this->next.size());

    // code gen children
    for (auto next : this->next) {
        auto v = next->codegen(builder, bcModule, this);
        values.push_back(v);
    }

    std::vector<llvm::Type*> types;
    types.reserve(values.size());
    transform(values.begin(), values.end(), back_inserter(types), ::getType);

    // create record struct
    auto recordType = llvm::StructType::create(bcModule->getContext(), types, "Struct." + this->name);
    llvm::AllocaInst* alloc;

    if (record == nullptr) {
        // we are a root record, so we should allocate global memory
        alloc = builder->CreateAlloca(recordType, nullptr, this->name); // todo: make global
    } else {
        // we are not a root type, so allocate local memory
        alloc = builder->CreateAlloca(recordType, nullptr, "tmp" + this->name);
    }

    return alloc;
}
