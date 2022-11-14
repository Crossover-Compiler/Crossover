//
// Created by bruh on 14-11-22.
//

#ifndef CROSSOVER_UTILS_H
#define CROSSOVER_UTILS_H
#include "../../src/datastructures/DataTree.h"
#include "../../src/datastructures/Record.h"
#include "../../src/datastructures/Field.h"
#include <fstream>


using namespace std;

namespace utils {
    /**
     * auxilliary function used to generate nested substructs recusively
     * @param ancestorsPtr
     * @param structure
     * @return the string of structs
     */
    string generateSubStruct(string* ancestorsPtr,DataTree* structure);

    /**
     * main function for generating structs, creates a cpp header file with generated structs based on the provided
     * DataTree vector
     * @param dataStructures
     */
    void generateStructs(vector<DataTree*> dataStructures);
};


#endif //CROSSOVER_UTILS_H
