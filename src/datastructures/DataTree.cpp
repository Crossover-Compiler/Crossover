//
// Created by Mart on 30/09/2022.
//

#include <algorithm>
#include "DataTree.h"

using namespace std;


    DataTree* DataTree::deepCopy() {
        DataTree* copy = new DataTree(name, level, value);

        if (this->picture != DataType::UNDEFINED) {
            copy->setPicture(getPicture());
        }

        for (auto c: this->getNext()) {
            copy->addNext(c->deepCopy());
        }

        copy->setCardinality(cardinality);

        return copy;
    }

    map<DataTree*, int> DataTree::getLeaves(map<DataTree*, int> result, int childOrder) {

        for (auto n: next) {
            if (n->getNext().empty()) {
                n->getLeaves(result, childOrder + 1);
            } else {
                result[n] = childOrder;
            }
        }
        return result;
    }

    bool DataTree::identicalNode(DataTree* dataTree) {
        return (level == dataTree->getLevel() && name == dataTree->getName());
    }

    bool DataTree::isRecord() {
        return !next.empty();
    }

    DataTree* DataTree::getLike() {
        return like;
    }

    void DataTree::setLike(DataTree* like) {
        this->like = like;
    }

    int DataTree::getOccurs() {
        return occurs;
    }

    void DataTree::setOccurs(int occurs) {
        this->occurs = occurs;
    }

    vector<DataTree*> DataTree::getNodesWithOccurs(vector<DataTree*> result) {
        if (occurs > 1) {
            result.push_back(this);
        }

        for (auto c: next) {
            c->getNodesWithOccurs(result);
        }
        return result;
    }

    vector<DataTree*> DataTree::getNodesWithLikes(vector<DataTree*> result) {
        if (like != nullptr) {
            result.push_back(this);
        }

        for (auto c: next) {
            c->getNodesWithLikes(result);
        }
        return result;
    }

    void DataTree::setIndex(int index) {
        this->index = index;
    }

    int DataTree::getIndex() {
        return index;
    }

    void DataTree::setPicture(DataType picture) {
        this->picture = picture;
    }

    DataType DataTree::getPicture() {
        return picture;
    }

    void DataTree::addNext(DataTree* dataTree) {
        next.push_back(dataTree);
    }

    void DataTree::addNext(vector<DataTree*> dataTree) {
        for (auto i: dataTree) {
            next.push_back(i);
        }
    }

    void DataTree::setNext(vector<DataTree*> next) {
        this->next = next;
    }

    vector<DataTree*> DataTree::getNext() {
        return next;
    }

    void DataTree::setPrevious(DataTree* dataTree) {
        this->previous = previous;
    }

    DataTree* DataTree::getPrevious() {
        return previous;
    }

    int DataTree::getLevel() {
        return level;
    }

    string DataTree::getValue() {
        return value;
    }

    void DataTree::setValue(string value) {
        this->value = value;
    }

    string DataTree::getName() {
        return name;
    }

    int DataTree::getCardinality() {
        return cardinality;
    }

    void DataTree::setCardinality(int cardinality) {
        this->cardinality = cardinality;
    }

    void DataTree::resetNode() {
        string value = name;
        for (auto & c: value) c = toupper(c);

        for (auto c: next) {
            c->resetNode();
        }
    }

    string DataTree::toString() {
        string result = to_string(level) + " " + value + " " + name + " " + dataTypeToString(picture) + "\n";
        for (auto i: next) {
            result += i->toString();
        }
        return result;
    }

    vector<DataTree*> DataTree::getNodes(string node, vector<DataTree*> result) {
        if (name == node) {
            result.push_back(this);
        }
        for (auto c: next) {
            c->getNodes(node, result);
        }
        return result;
    }

    vector<DataTree*> DataTree::getNodesFromPath(string path, vector<DataTree*> result) {
        auto ls = split(split(path, "//")[0], "OF");
        std::reverse(ls.begin(), ls.end());
        vector<DataTree*> temp;
        vector<DataTree*> list = getNodes(ls[0], temp);
        int index = 1;
        for (int i = 0; i < ls.size(); ++i) {
            vector<DataTree*> children;
            for (auto l: list) {
                children
            }
        }
    }



vector<string> DataTree::split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}
