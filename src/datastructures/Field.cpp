#include "Field.h"
#include "../Exceptions/CompileException.h"

llvm::Value* Field::codegen(BCBuilder* builder, BCModule* bcModule, bool global, string name) {

    switch (primitiveType) {
        case DataType::INT: {
            string temp_str = this->value;

            int Z_count = 0;
            int S_count = 0;

            for (auto _char: temp_str) {
                if (_char == 'Z') {
                    Z_count++;
                }
                if (_char == 'S') {
                    S_count++;
                }
            }

            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'Z'), temp_str.end());
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'S'), temp_str.end());

            uint64_t value = 0;
            uint64_t scale = this->scale;

            // TODO: Review what we want with Z characters in Pictures
            uint8_t length = this->cardinality - Z_count - S_count;
            bool isSigned = this->isSigned;
            bool positive = this->isPositive;

            return builder->CreateNumber(new bstd_number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = isSigned,
                    .positive = positive
            }, name, global);
        }
        case DataType::DOUBLE: {
            string temp_str = this->value;

            int Z_count = 0;
            int V_count = 0;
            int S_count = 0;

            bool seen_V = false;
            bool S_after_V = false;

            for (auto _char: temp_str) {
                if (_char == 'V') {
                    V_count++;
                    seen_V = true;
                }
                if (_char == 'Z') {
                    Z_count++;
                }
                if (_char == 'S') {
                    S_count++;
                    if (seen_V) {
                        S_after_V = true;
                    }
                }
            }

            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'V'), temp_str.end());
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'Z'), temp_str.end());
            temp_str.erase(remove(temp_str.begin(), temp_str.end(), 'S'), temp_str.end());
            // TODO: If double contains Z they are not used
            uint64_t value = std::stoi(temp_str);

            uint64_t scale = this->scale;
            if (S_after_V) scale--;

            // TODO: Review what we want with Z characters in Pictures
            uint8_t length = this->cardinality - Z_count - V_count - S_count;
            bool signed_ = this->isSigned;
            bool positive = this->isPositive;

            return builder->CreateNumber(new bstd_number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = signed_,
                    .positive = positive
            }, name, global);
        }
        case DataType::STRING: {
            string temp_str = this->value;

            auto* bytes = new unsigned char[this->cardinality];
            char* mask = new char[this->cardinality]; // no null-terminator!
            ::strcpy((char*)bytes, temp_str.c_str()); // todo: this should be a proper initializer
            ::strcpy(mask, temp_str.c_str());

            uint8_t length = this->cardinality;

            return builder->CreatePicture(new bstd_picture {
                    .bytes = bytes,
                    .mask = mask,
                    .length = length
            }, name, global);
        }
        default: {
            throw CompileException("primitiveType of Field: " + name + " could not be resolved!");
        }
    }

    throw logic_error("Should not get here...");
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
    return result;
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



