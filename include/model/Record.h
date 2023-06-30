//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_RECORD_H
#define CROSSOVER_RECORD_H

#include "DataEntry.h"

class Record : public DataEntry {

private:
    std::vector<DataEntry*> children;
    Record* parent;

public:
    Record(std::string& name, int level) :
            DataEntry(name, level),
            children(),
            parent(nullptr) {}

    llvm::Value* codegen(BCBuilder* builder, BCModule* bcModule, bool global) override;

    void addChild(DataEntry* dataTree);

    std::vector<DataEntry*> getChildren();

    Record* getParent();

    DataEntry* findDataEntry(std::string& name);

    std::string toString() override;

    bool isRecord() override {
        return true;
    };

};

#endif //CROSSOVER_RECORD_H
