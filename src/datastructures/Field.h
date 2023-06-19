//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_FIELD_H
#define CROSSOVER_FIELD_H

#include "DataEntry.h"
#include "Record.h"

class Field : public DataEntry {

public:
    enum class Type {INT, DOUBLE, STRING, UNDEFINED};

private:
    int cardinality;
    int scale;
    std::string mask;
    Type type;
    std::string value;
    bool isSigned;
    bool isPositive;

public:
    Field(std::string& name, int level, std::string& value) :
            DataEntry(name, level),
            value(value),
            cardinality(0),
            scale(0),
            type(Type::UNDEFINED),
            isSigned(false),
            isPositive(false) {}

    llvm::Value *codegen(BCBuilder *builder, BCModule *bcModule, bool global) override;

    void setMask(std::string& mask);

    std::string getMask();

    void setCardinality(int cardinality);

    void setIsSigned(bool isSigned);

    void setIsPositive(bool isPositive);

    void setScale(int scale);

    std::string toString() override;

    bool isNumber();

    Type getType() const;

    void setType(Type type);

    bool isRecord() override {
      return false;
    };

};


#endif //CROSSOVER_FIELD_H
