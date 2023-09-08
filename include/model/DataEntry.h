//
// Created by manzi on 6/19/23.
//

#ifndef CROSSOVER_DATAENTRY_H
#define CROSSOVER_DATAENTRY_H

#include <string>
#include <llvm/IR/Value.h>

class BCModule;
class BCBuilder;

class DataEntry {

protected:
    std::string name;
    int level;
    int occurs;
    DataEntry *like;
    llvm::Value* value;

public:
    DataEntry(std::string& name, int level, int occurs, DataEntry* like, llvm::Value* value) :
            name(name),
            level(level),
            occurs(1),
            like(nullptr),
            value(nullptr) {}

    DataEntry(std::string& name, int level) :
            DataEntry(name, level, 1, nullptr, nullptr) {}

    virtual bool isRecord() = 0;

    virtual std::string toString() = 0;

    virtual llvm::Value* codegen(BCBuilder* builder, BCModule* bcModule, bool global) = 0;

    llvm::Value* getValue();

    void setValue(llvm::Value* value);

    std::string getName();

    int getLevel() const;

};


#endif //CROSSOVER_DATAENTRY_H
