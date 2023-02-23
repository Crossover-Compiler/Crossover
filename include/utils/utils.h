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
     * auxilliary function used to generate nested substructs recursively
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

    /**
     *
     * check cli args for given element
     * @param argc
     * @param argv
     * @param element
     * @return
     */
    bool presentInArgs(int argc, char** argv, string element);

    /**
     * run system command and get result in an std::string
     *
     * @param cmd
     * @return
     */
    string exec(string cmdstr);

     /**
      * check parameters for given argument
      *
      * @param argc
      * @param argv
      * @param arg
      * @return
      */
    vector<string> getArgumentParams(int argc, char** argv, string arg);



    /**
     * JAVA-like split function for strings
     * @param s
     * @param delimiter
     * @return
     */
    vector<string> split(string& s, string delimiter);

    /**
     * Extract global and local text symbols from nm output
     * @param input
     * @return
     */
    vector<string> extractTextSymbols(string& input);


    /**
     * Extract program name from program path
     * @param input
     * @return
     */
    string extractProgramNameFromPath(string path);
};


#endif //CROSSOVER_UTILS_H
