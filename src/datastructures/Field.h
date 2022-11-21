//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_FIELD_H
#define CROSSOVER_FIELD_H

#include "DataTree.h"
#include "Record.h"

class Field : public DataTree {

public:
    Field(std::string name, int level, std::string value) : DataTree(std::move(name), level) {
        this->value = std::move(value);
    };

    llvm::Value* codegen(llvm::IRBuilder<>* builder, BCModule* bcModule, Record* record) override;
};


#endif //CROSSOVER_FIELD_H
