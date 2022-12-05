//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_RECORD_H
#define CROSSOVER_RECORD_H

#include "DataTree.h"

class Record : public DataTree {

public:
    Record(std::string name, int level) : DataTree(std::move(name), level) {};

    /**
     * todo: doc
     */
    static llvm::Type* getType(llvm::Value *value);

    llvm::Value* codegen(BCBuilder* builder, BCModule* bcModule, Record* record) override;

    string toString();
};


#endif //CROSSOVER_RECORD_H
