//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_FIELD_H
#define CROSSOVER_FIELD_H

#include "DataEntry.h"
#include "Record.h"

class Field : public DataEntry {

protected:
    int cardinality;
    std::string mask;

public:
    Field(std::string& name, int level) :
            DataEntry(name, level),
            cardinality(0) {}

    void setMask(std::string& mask);

    std::string getMask();

    void setCardinality(int cardinality);

    std::string toString() override;

    virtual bool isNumber() = 0;

    virtual llvm::Type* getType(llvm::LLVMContext& context) = 0;

    bool isRecord() override {
      return false;
    };

};


#endif //CROSSOVER_FIELD_H
