//
// Created by manzi on 6/19/23.
//

#include "../../include/model/NumberField.h"
#include "../../include/ir/BCBuilder.h"

llvm::Value* NumberField::codegen(BCBuilder *builder, BCModule *bcModule, bool global) {

    std::string temp_str = std::string(this->mask);

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

    auto v = builder->CreateNumber(new bstd_number {
            .value = value,
            .scale = scale,
            .length = length,
            .isSigned = signed_,
            .positive = positive
    }, name, global);

    this->setValue(v);

    return v;
}

llvm::Type* NumberField::getType(llvm::LLVMContext &context) {
    if (this->isInteger()) {
        return llvm::IntegerType::getInt64Ty(context);
    }
    return llvm::IntegerType::getDoubleTy(context);
}

bool NumberField::isInteger() const {
    return this->scale == 0;
}


void NumberField::setIsSigned(bool s) {
    this->isSigned = s;
}

void NumberField::setIsPositive(bool p) {
    this->isPositive = p;
}

void NumberField::setScale(int s) {
    this->scale = s;
}
