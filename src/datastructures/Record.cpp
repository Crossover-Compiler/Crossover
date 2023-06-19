//
// Created by bruh on 10/17/22.
//

#include <llvm/IR/DerivedTypes.h>
#include "Record.h"
#include "../Exceptions/CompileException.h"
#include "../../include/ir/bcbuilder.h"

std::string Record::toString() {

    std::string result = std::to_string(level) + " " + name + "\n";

    for (auto entry: children) {
        result += "\t" + entry->toString();
    }

    return result;
}

llvm::Value *Record::codegen(BCBuilder *builder, BCModule *bcModule, bool global) {

    // code gen all children, generate struct for this record, and insert the children into this struct.

    std::vector<llvm::Value *> values;
    values.reserve(this->children.size());

    // code gen children
    for (auto child: this->children) {
        auto v = child->codegen(builder, bcModule, false);
        values.push_back(v);
    }

    std::vector<llvm::Type *> types;
    types.reserve(values.size());
    transform(values.begin(), values.end(), back_inserter(types), [] (auto v) { return v->getType(); });

    // create record struct
    llvm::StructType *recordType = llvm::StructType::create(bcModule->getContext(), types, "Struct." + name);
    llvm::Value *alloc;

    if (global) {
        // we are a root record, so we should allocate global memory
        llvm::Constant *zeroInit = llvm::ConstantAggregateZero::get(recordType);
        alloc = new llvm::GlobalVariable(*(llvm::Module *) bcModule, recordType, false,
                                         llvm::GlobalVariable::CommonLinkage, zeroInit, name, nullptr,
                                         llvm::GlobalValue::NotThreadLocal, 4, false);
    } else {
        // we are not a root type, so allocate local memory
        alloc = builder->CreateAlloca(recordType, nullptr, name);
    }

    // assign children this record struct
    std::vector<llvm::Value *> indices(values.size());
    llvm::Value *offset = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, 0, false));
    for (int i = 0; i < values.size(); ++i) {
        indices[i] = llvm::ConstantInt::get(bcModule->getContext(), llvm::APInt(32, i, false));

        // store value to field of struct
        llvm::Value *value_ptr = builder->CreateGEP(recordType, alloc, {offset, indices[i]});
        builder->CreateStore(values[i], value_ptr);
    }

    this->setValue(alloc);

    return alloc;
}

void Record::addChild(DataEntry* dataEntry) {

    if (dataEntry == this) {
        throw std::invalid_argument("A record can not comprise itself");
    }

    children.push_back(dataEntry);

    if (auto record = dynamic_cast<Record*>(dataEntry)) {
        record->parent = this;
    }
}

std::vector<DataEntry*> Record::getChildren() {
    return this->children;
}

Record* Record::getParent() {
    return this->parent;
}

DataEntry *Record::findDataEntry(std::string& name) {

    if (this->name == name) {
        return this;
    }

    DataEntry* result = nullptr;

    for (DataEntry* entry : children) {

        DataEntry* candidate = nullptr;

        if (entry->isRecord()) {

            // we should be able to cast this safely...
            auto record = dynamic_cast<Record*>(entry);
            candidate = record->findDataEntry(name);

        } else if(entry->getName() == name) { // the entry is a field, so match on name

            candidate = entry;
        }


        if (candidate && result) {
            throw CompileException("Insufficient qualification: found multiple candidates for name: " + name);
        }

        result = candidate;

    }

    return result;
}
