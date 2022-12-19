//
// Created by bruh on 2-10-22.
//

#ifndef CROSSOVER_DATATREE_H
#define CROSSOVER_DATATREE_H

#include <string>
#include <utility>
#include <vector>
#include <map>
#include <stdexcept>
#include <llvm/IR/IRBuilder.h>
#include "../../include/ir/bcmodule.h"
#include "../../include/ir/bcbuilder.h"

class Record;

using namespace std;

class DataTree {

protected:
    DataTree(string name, int level) :
            name(std::move(name)),
            level(level),
            next(),
            previous(nullptr),
            occurs(1),
            like(nullptr),
            llvm_value(nullptr)

    {}

    string name;
    vector<DataTree*> next;
    DataTree* previous;
    int level;
    int occurs;
    DataTree *like;
    llvm::Value* llvm_value;


public:

    llvm::Value* getLlvmValue();

    void setLlvmValue(llvm::Value* llvm_value);

    map<DataTree*, int> getLeaves(map<DataTree*, int> result, int childOrder);

    bool identicalNode(DataTree* dataTree);

    bool isRecord();

    vector<DataTree*> getNodesWithOccurs(vector<DataTree*> result);

    vector<DataTree*> getNodesWithLikes(vector<DataTree*> result);

    DataTree* getLike();

    void setLike(DataTree* like);

    int getOccurs();

    void setOccurs(int occurs);

    void addNext(DataTree* dataTree);

    void addNext(vector<DataTree*> dataTree);

    void setNext(vector<DataTree*> next);

    vector<DataTree*> getNext();

    void setPrevious(DataTree* dataTree);

    DataTree* getPrevious();

    int getLevel();

    string getName();

    void resetNode();

    string toString();

    DataTree* findDataTreeByName(string name);

    vector<DataTree*> getNodes(string node, vector<DataTree*> result);

    vector<DataTree*> getNodesFromPath(string path, vector<DataTree*> result);

    vector<string> split(string s, string delimiter);

    virtual llvm::Value* codegen(BCBuilder* builder, BCModule* bcModule, bool global, string name) = 0;
    virtual llvm::Value* codegen(BCBuilder* builder, BCModule* bcModule, bool global) = 0;

};



#endif //CROSSOVER_DATATREE_H

