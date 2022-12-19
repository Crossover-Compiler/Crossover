//
// Created by bruh on 10/17/22.
//

#include "Field.h"
#include "../Exceptions/CompileException.h"

llvm::Value* Field::codegen(BCBuilder* builder, BCModule* bcModule, bool global, string name) {

    switch (primitiveType) {
        case DataType::INT: {
            uint64_t value = std::stoi(this->value);
            uint64_t scale = 125; // todo: add to grammar
            uint32_t length = this->cardinality;
            bool isSigned = true; // todo: have include "signed" in grammar!
            bool positive = false;

            return builder->CreateNumber(new bstd::Number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = isSigned,
                    .positive = positive
            }, name, global);
        }
        case DataType::DOUBLE: {
            // TODO: CreateNumber?
            break;
        }
        case DataType::STRING: {
            // TODO: CreateString?
            break;
        }
        default: {
            throw CompileException("primitiveType of Field: " + name + " could not be resolved!");
        }
    }
}

llvm::Value* Field::codegen(BCBuilder* builder, BCModule* bcModule, bool global) {
    return codegen(builder, bcModule, global, name);
}

void Field::setPicture(string picture) {
    this->picture = picture;
}

string Field::getPicture() {
    return picture;
}

string Field::getValue() {
    return value;
}

void Field::setValue(string value) {
    this->value = value;
}

string Field::toString() {
    string result = to_string(level) + " " + value + " " + name + " " + picture + "\n";
}

DataType Field::getPrimitiveType() const {
    return primitiveType;
}

void Field::setPrimitiveType(DataType primitiveType) {
    Field::primitiveType = primitiveType;
}

int Field::getCardinality() {
    return cardinality;
}

void Field::setCardinality(int cardinality) {
    this->cardinality = cardinality;
}



