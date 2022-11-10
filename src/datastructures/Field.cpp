//
// Created by bruh on 10/17/22.
//

#include "Field.h"

llvm::Value* Field::codegen(BCBuilder* builder, BCModule* bcModule, Record* record) {

    uint64_t value = std::stoi(this->value);
    uint64_t scale = 0; // todo: add to grammar
    uint64_t length = 0;
    bool isSigned = false; // todo: have include "signed" in grammar!
    bool positive = true;

    return builder->CreateNumber(new Number{
        .value = value;
        .scale = scale;
        .length = length;
        .isSigned = isSigned;
        .positive = positive;
    }, this->name)
}
