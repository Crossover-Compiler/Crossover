//
// Created by manzi on 6/19/23.
//

#ifndef CROSSOVER_NUMBERFIELD_H
#define CROSSOVER_NUMBERFIELD_H


#include "Field.h"

class NumberField : public Field {

protected:
    int scale;
    bool isSigned;
    bool isPositive;

public:
    NumberField(std::string& name, int level) :
        Field(name, level),
        scale(0),
        isSigned(false),
        isPositive(false) {}

    bool isInteger() const;

    void setIsSigned(bool isSigned);

    void setIsPositive(bool isPositive);

    void setScale(int scale);

    llvm::Value * codegen(BCBuilder *builder, BCModule *bcModule, bool global) override;

    llvm::Type* getType(llvm::LLVMContext &context) override;

    bool isNumber() override {
        return true;
    };

};


#endif //CROSSOVER_NUMBERFIELD_H
