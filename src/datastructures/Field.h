//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_FIELD_H
#define CROSSOVER_FIELD_H

#include "DataTree.h"
#include "Record.h"

enum class DataType {INT, DOUBLE, STRING, UNDEFINED};
constexpr const char* dataTypeToString(DataType dt) noexcept
{
    switch (dt)
    {
        case DataType::INT: return "INT";
        case DataType::DOUBLE: return "DOUBLE";
        case DataType::STRING: return "STRING";
        case DataType::UNDEFINED: return "UNDEFINED";
        default: throw std::invalid_argument("Unimplemented item");
    }
}

class Field : public DataTree {

public:
    Field(std::string name, int level, std::string value) : DataTree(std::move(name), level) {
        this->value = std::move(value);

    };

    int cardinality;
    int scale;
    string picture;
    DataType primitiveType;
    string value;
    bool isSigned;
    bool isPositive;

    llvm::Value *codegen(BCBuilder *builder, BCModule *bcModule, bool global) override;
    llvm::Value *codegen(BCBuilder *builder, BCModule *bcModule, bool global, string name) override;

    void setPicture(string picture);

    string getPicture();

    string getValue();

    void setValue(string value);

    int getCardinality();

    void setCardinality(int cardinality);

    string toString();

    [[nodiscard]] DataType getPrimitiveType() const;

    void setPrimitiveType(DataType primitiveType);
};


#endif //CROSSOVER_FIELD_H
