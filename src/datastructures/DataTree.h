//
// Created by Mart on 30/09/2022.
//

#ifndef CROSSOVER_DATATREE_H
#define CROSSOVER_DATATREE_H

using namespace std

class DataTree {

private:
    string name;
    vector<DataTree> next;
    DataTree previous;
    int level;
    string value;
    string name;
    DataTypes picture;
    int cardinality;
    int index;
    int occurs;
    DataTree like;

public:
    DataTree(string name, int level, string value) :
    name(name),
    level(level),
    value(value),
    next(new Vector<DataTree>),
    previous(nullptr),
    picture(nullptr),
    index(1),
    occurs(1),
    like(nullptr),
    {}

    DataTree deepCopy();

    Map<DataTree, int> getLeaves(Map<DataTree, int> result, int childOrder);

    Bool identicalNode(DataTree dataTree);

    Bool isRecord();

    DataTree getLike();

    void setLike(DataTree like);

    int getOccurs();

    void setOccurs(int occurs);

    vector<DataTree> getNodesWithOccurs(vector<DataTree> result);

    vector<DataTree> getNodesWithLikes(Vector<DataTree> result);

    void setIndex(int index);

    int getIndex();

    void setPicture(string picture);

    void setPicture(DataTypes picture);

    DataTypes getPicture();

    void addNext(DataTree dataTree);

    void addNext(vector<DataTree> dataTree);

    void setNext(vector<DataTree> next);

    vector<DataTree> getNext();

    void setPrevious(DataTree dataTree);

    DataTree getPrevious();

    int getLevel();

    string getValue();

    void setValue(string value);

    string getName();

    int getCardinality();

    setCardinality(int cardinality)

    void resetNode();

    string toString();

    vector<DataTree> getTree(string node, vector<DataTree> result);

    vector<DataTree> getNodesFromPath(string path, vector<DataTree> result);

};



#endif //CROSSOVER_DATATREE_H
