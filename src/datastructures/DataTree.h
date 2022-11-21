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

class Record;

using namespace std;
enum class DataType {NINE, X, UNDEFINED};
constexpr const char* dataTypeToString(DataType dt) noexcept
{
    switch (dt)
    {
        case DataType::NINE: return "NINE";
        case DataType::X: return "X";
        case DataType::UNDEFINED: return "UNDEFINED";
        default: throw std::invalid_argument("Unimplemented item");
    }
}

class DataTree {

protected:
    DataTree(string name, int level) :
            name(std::move(name)),
            level(level),
            next(),
            previous(nullptr),
            picture(DataType::UNDEFINED),
            cardinality(-1),
            index(1),
            occurs(1),
            like(nullptr)
    {}

    string name;
    vector<DataTree*> next;
    DataTree* previous;
    int level;
    string value;
    DataType picture;
    int cardinality;
    int index;
    int occurs;
    DataTree* like;

public:

    map<DataTree*, int> getLeaves(map<DataTree*, int> result, int childOrder);

    bool identicalNode(DataTree* dataTree);

    bool isRecord();

    DataTree* getLike();

    void setLike(DataTree* like);

    int getOccurs();

    void setOccurs(int occurs);

    vector<DataTree*> getNodesWithOccurs(vector<DataTree*> result);

    vector<DataTree*> getNodesWithLikes(vector<DataTree*> result);

    void setIndex(int index);

    int getIndex();

    void setPicture(DataType picture);

    DataType getPicture();

    void addNext(DataTree* dataTree);

    void addNext(vector<DataTree*> dataTree);

    void setNext(vector<DataTree*> next);

    vector<DataTree*> getNext();

    void setPrevious(DataTree* dataTree);

    DataTree* getPrevious();

    int getLevel();

    string getValue();

    void setValue(string value);

    string getName();

    int getCardinality();

    void setCardinality(int cardinality);

    void resetNode();

    string toString();

    vector<DataTree*> getNodes(string node, vector<DataTree*> result);

    vector<DataTree*> getNodesFromPath(string path, vector<DataTree*> result);

    vector<string> split(string s, string delimiter);

    virtual llvm::Value* codegen(llvm::IRBuilder<>* builder, BCModule* bcModule, Record* record) = 0;

};



#endif //CROSSOVER_DATATREE_H

