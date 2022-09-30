//
// Created by Mart on 30/09/2022.
//

#include "DataTree.h"

using namespace std;

    DataTree deepCopy() {
        DataTree copy = new DataTree(name, level, value);

        if (this.picture != null) {
            copy.setPicture(getPicture());
        }

        for (var c: this.getNext()) {
            copy.addNext(c.deepCopy());
        }

        copy.setCardinality(cardinality);

        return copy;
    }

    Map<DataTree, int> getLeaves(Map<DataTree, int> result, int childOrder) {

        for (auto n: next) {
            if (n.getNext().isEmpty()) {
                n.getLeaves(result, childOrder + 1);
            } else {
                result[n] = childOrder;
            }
        }
        return result;
    }

    Bool identicalNode(DataTree dataTree) {
        return level.equals(dataTree.getLevel() && name.equals(dataTree.getname()));
    }

    Bool isRecord() {
        return !next.isEmpty();
    }

    DataTree getLike() {
        return like;
    }

    void setLike(DataTree like) {
        this.like = like;
    }

    int getOccurs() {
        return occurs;
    }

    void setOccurs(int occurs) {
        this.occurs = occurs;
    }

    vector<DataTree> getNodesWithOccurs(vector<DataTree> result) {
        if (occurs > 1) {
            result.add(this);
        }

        for (auto c: next) {
            c.getNodesWithOccurs(result);
        }
        return result;
    }

    vector<DataTree> getNodesWithLikes(Vector<DataTree> result) {
        if (like != nullptr) {
            result.add(this);
        }

        for (auto c: next) {
            c.getNodesWithLikes(result);
        }
        return result;
    }

    void setIndex(int index) {
        this.index = index;
    }

    int getIndex() {
        return index;
    }

    void setPicture(string picture) {
        this.picture = DataTypes.valueOf(picture);
    }

    void setPicture(DataTypes picture) {
        this.picture = picture;
    }

    DataTypes getPicture() {
        return picture;
    }

    void addNext(DataTree dataTree) {
        next.add(dataTree);
    }

    void addNext(vector<DataTree> dataTree) {
        for (auto i: dataTree) {
            next.add(i);
        }
    }

    void setNext(vector<DataTree> next) {
        this.next = next;
    }

    vector<DataTree> getNext() {
        return next;
    }

    void setPrevious(DataTree dataTree) {
        this.previous = previous;
    }

    DataTree getPrevious() {
        return previous;
    }

    int getLevel() {
        return level;
    }

    string getValue() {
        return value;
    }

    void setValue(string value) {
        this.value = value;
    }

    string getName() {
        return name;
    }

    int getCardinality() {
        return cardinality;
    }

    setCardinality(int cardinality) {
        this.cardinality = cardinality;
    }

    void resetTree() {
        value = name.toUpperCase();
        for (auto c: next) {
            c.resetTree();
        }
    }

    string toString() {
        string result = level + " " + value + " " + name + " " + picture + "\n";
        for (auto i: next) {
            result += i.toString();
        }
        return result;
    }

    vector<DataTree> getNodes(string node, vector<DataTree> result) {
        if (name.equals(node)) {
            result.add(this);
        }
        for (auto c: next) {
            c.getNodes(node, result);
        }
        result;
    }

    vector<DataTree> getNodesFromPath(string path, vector<DataTree> result) {
        return result;
    }