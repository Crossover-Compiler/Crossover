//
// Created by bruh on 10/17/22.
//

#include "Field.h"
#include "../Exceptions/CompileException.h"

llvm::Value* Field::codegen(BCBuilder* builder, BCModule* bcModule, Record* record) {

    switch (primitiveType) {
        case DataType::INT: {
            uint64_t value = std::stoi(this->value);
            uint64_t scale = 0; // todo: add to grammar
            uint8_t length = 0;
            bool isSigned = false; // todo: have include "signed" in grammar!
            bool positive = true;

            return builder->CreateNumber(new bstd::Number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = isSigned,
                    .positive = positive
            }, this->name, record == nullptr);
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



