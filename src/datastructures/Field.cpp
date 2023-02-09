//
// Created by bruh on 10/17/22.
//

#include <iostream>
#include "Field.h"
#include "../Exceptions/CompileException.h"

llvm::Value* Field::codegen(BCBuilder* builder, BCModule* bcModule, bool global, string name) {

    switch (primitiveType) {
        case DataType::INT: {
            string temp_str = this->value;
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'Z'), temp_str.end());
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'S'), temp_str.end());
            // TODO: If int contains Z they are not used
            uint64_t value = std::stoi(temp_str);

            uint64_t scale = this->scale;
            // TODO: If double contains Z or S this is invalid
            uint8_t length = this->cardinality;
            bool isSigned = this->isSigned;
            bool positive = this->isPositive;

            return builder->CreateNumber(new bstd_Number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = isSigned,
                    .positive = positive
            }, name, global);
        }
        case DataType::DOUBLE: {
            string temp_str = this->value;
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'V'), temp_str.end());
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'Z'), temp_str.end());
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'S'), temp_str.end());
            // TODO: If double contains Z they are not used

            uint64_t value = std::stoi(temp_str);
            // TODO: If double contains S after V this is invalid
            uint64_t scale = this->scale;
            // TODO: If double contains Z or S this is invalid, the -1 is for the V
            uint8_t length = this->cardinality - 1;
            bool isSigned = this->isSigned;
            bool positive = this->isPositive;

            cout << "Double: " << name << ":" << endl;
            cout << "value: " << value << endl;
            cout << "scale: " << scale << endl;
            cout << "length: " << length << endl;
            cout << "isSigned: " << isSigned << endl;
            cout << "positive: " << positive << endl;

            return builder->CreateNumber(new bstd_Number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = isSigned,
                    .positive = positive
            }, name, global);
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



