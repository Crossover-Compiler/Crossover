#include "Field.h"
#include "../Exceptions/CompileException.h"
#include "../../include/ir/bcbuilder.h"

llvm::Value* Field::codegen(BCBuilder* builder, BCModule* bcModule, bool global) {

    switch (type) {

        case Type::INT: {

            std::string temp_str = this->value;

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

            auto v = builder->CreateNumber(new bstd_number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = isSigned,
                    .positive = positive
            }, name, global);

            this->setValue(v);

            return v;
        }

        case Type::DOUBLE: {
            std::string temp_str = this->value;

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
            uint64_t value = 0;

            uint64_t scale = this->scale;
            if (S_after_V) scale--;

            // TODO: Review what we want with Z characters in Pictures
            uint8_t length = this->cardinality - Z_count - V_count - S_count;
            bool signed_ = this->isSigned;
            bool positive = this->isPositive;

            auto v = builder->CreateNumber(new bstd_number{
                    .value = value,
                    .scale = scale,
                    .length = length,
                    .isSigned = signed_,
                    .positive = positive
            }, name, global);

            this->setValue(v);

            return v;
        }

        case Type::STRING: {
            char * mask = new char [this->cardinality];
            std::strcpy (mask, value.c_str());

            unsigned char *bytes = new unsigned char [this->cardinality];

            int i = 0;
            while (i < value.length()) {
                if (mask[i] == 'X' || mask[i] == 'A' ) {
                    bytes[i] = ' ';
                } else if (mask[i] == '9') {
                    bytes[i] = 0;
                }
                i++;
            }

            uint8_t length = this->cardinality;

            auto v = builder->CreatePicture(new bstd_picture {
                    .bytes = bytes,
                    .mask = mask,
                    .length = length
            }, name, global);

            this->setValue(v);

            return v;
        }

        default: {
            throw CompileException("primitiveType of Field: " + name + " could not be resolved!");
        }
    }
}

void Field::setMask(std::string &m) {
    this->mask = m;
}

std::string Field::getMask() {
    return mask;
}

void Field::setCardinality(int c) {
    this->cardinality = c;
}

void Field::setIsSigned(bool s) {
    this->isSigned = s;
}

void Field::setIsPositive(bool p) {
    this->isPositive = p;
}

void Field::setScale(int s) {
    this->scale = s;
}

std::string Field::toString() {
    std::string result = std::to_string(level) + " " + value + " " + name + " " + mask + "\n";
    return result;
}

Field::Type Field::getType() const {
    return type;
}

void Field::setType(Type t) {
    Field::type = t;
}

bool Field::isNumber(){
    return (type == Type::INT || type == Type::DOUBLE);
}