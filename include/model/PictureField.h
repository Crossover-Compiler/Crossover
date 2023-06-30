//
// Created by manzi on 6/19/23.
//

#ifndef CROSSOVER_PICTUREFIELD_H
#define CROSSOVER_PICTUREFIELD_H

#include "Field.h"

class PictureField : public Field {

public:
    PictureField(std::string& name, int level) :
        Field(name, level) {}

    llvm::Value * codegen(BCBuilder *builder, BCModule *bcModule, bool global) override;

    llvm::Type * getType(llvm::LLVMContext &context) override;

    bool isNumber() override {
        return false;
    }

};

#endif //CROSSOVER_PICTUREFIELD_H
