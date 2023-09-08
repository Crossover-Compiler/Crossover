#include "../../include/model/Field.h"
#include "../../include/exception/CompileException.h"
#include "../../include/ir/BCBuilder.h"

void Field::setMask(std::string &m) {
    this->mask = m;
}

std::string Field::getMask() {
    return mask;
}

void Field::setCardinality(int c) {
    this->cardinality = c;
}

std::string Field::toString() {
    return std::to_string(level) + " " + name + " " + mask + "\n";
}
