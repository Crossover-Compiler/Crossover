//
// Created by manzi on 6/19/23.
//

#include "../../include/model/DataEntry.h"

llvm::Value *DataEntry::getValue() {
    return this->value;
}

void DataEntry::setValue(llvm::Value *v) {
    this->value = v;
}

std::string DataEntry::getName() {
    return this->name;
}

int DataEntry::getLevel() const {
    return this->level;
}
