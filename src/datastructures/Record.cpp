//
// Created by bruh on 10/17/22.
//

#include "Record.h"

llvm::Type *Record::getType(llvm::Value *value) {
    return value->getType();
}

llvm::Value *Record::codegen(BCBuilder *builder, BCModule *bcModule, Record *record) {

    // code gen all children, generate struct for this record, and insert the children into this struct.

    std::vector<llvm::Value *> values;
    values.reserve(this->next.size());

    // code gen children
    for (auto next: this->next) {
        auto v = next->codegen(builder, bcModule, this);
        next->setLlvmValue(v);
        values.push_back(v);
    }

    std::vector<llvm::Type *> types;
    types.reserve(values.size());
    transform(values.begin(), values.end(), back_inserter(types), Record::getType);

    // create record struct
    llvm::StructType *recordType = llvm::StructType::create(bcModule->getContext(), types, "Struct." + this->name);
    llvm::Value *alloc;

    if (record == nullptr) {
        // we are a root record, so we should allocate global memory
        llvm::Constant *zeroInit = llvm::ConstantAggregateZero::get(recordType);
        alloc = new llvm::GlobalVariable(*(llvm::Module *) bcModule, recordType, false,
                                         llvm::GlobalVariable::CommonLinkage, zeroInit, this->name, nullptr,
                                         llvm::GlobalValue::NotThreadLocal, 4, false);
    } else {
        // we are not a root type, so allocate local memory
        alloc = builder->CreateAlloca(recordType, nullptr, "tmp" + this->name);
    }

    // assign children this record struct
    std::vector<llvm::Value *> indices(values.size());
    llvm::Value *offset = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 0, false));
    for (int i = 0; i < values.size(); ++i) {
        indices[i] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, i, false));

        // store value to field of struct
        llvm::Value *value_ptr = builder->CreateGEP(recordType, alloc, {offset, indices[i]}, "valuePtr");
        builder->CreateStore(values[i], value_ptr);
    }

    return alloc;
}

string Record::toString() {
    string result = to_string(level) + " " + name + "\n";
    return result;
}
