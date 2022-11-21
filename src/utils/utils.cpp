//
// Created by bruh on 14-11-22.
//

#include "../../include/utils/utils.h"
#include <fstream>

using namespace std;

namespace utils{
    string generateSubStruct(string* ancestorsPtr,DataTree* structure){

        string result;
        string name = structure->getName();
        result.append("typedef struct");
        result.append(" ");
        result.append(*ancestorsPtr);
        result.append("_t {");

        vector<DataTree*> children = structure->getNext();
        while(!children.empty()){
            result.append("\n\t");
            DataTree* subtreeptr = children[0];
            if(dynamic_cast<Record*>(subtreeptr) != nullptr){
                string ancestors = *ancestorsPtr;
                result.append(ancestors);
                result.append("_");
                result.append(subtreeptr->getName());
                result.append("_t* ");
                result.append(subtreeptr->getName());
                result.append(";");
                ancestors.append("_");
                ancestors.append(subtreeptr->getName());
                result.insert(0, generateSubStruct(&ancestors ,subtreeptr)); // generate substructs recursively and prepend to result
            } else if(dynamic_cast<Field*>(subtreeptr) != nullptr){
                //Todo expand later when more fields other than numeric
                result.append("Number* ");
                result.append(subtreeptr->getName());
                result.append("; // expected format: ");
                result.append(subtreeptr->getValue());
            }
            children.erase(children.begin());
        }

        result.append("\n} ");
        result.append(*ancestorsPtr);
        result.append("_t;\n\n");
        return result;
    }

    void generateStructs(vector<DataTree*> dataStructures){
        std::ofstream outputFile("BBCBLAPI.h");

        string firstLines = "// Generated with Crossover\n"
                            "\n// ***"
                            "\n// Include lib files here"
                            "\n// ***"
                            "\n";

        string middleLines= "\n" ;
        string lastLines = "\n";

        while(!dataStructures.empty()){
            DataTree* treeptr = dataStructures[0];
            string structname = treeptr->getName();
            if (dynamic_cast<Record*>(treeptr) != nullptr){
                lastLines.append("typedef struct ");
                lastLines.append(structname);
                lastLines.append("_t {");
                //add members here
                vector<DataTree*> children = treeptr->getNext();
                while(!children.empty()){
                    lastLines.append("\n\t");
                    DataTree* subtreeptr = children[0];
                    if(dynamic_cast<Record*>(subtreeptr) != nullptr){
                        lastLines.append(structname);
                        lastLines.append("_");
                        lastLines.append(subtreeptr->getName());
                        lastLines.append("_t* ");
                        lastLines.append(subtreeptr->getName());
                        lastLines.append(";");

                        string currentPath = structname;
                        currentPath.append("_");
                        currentPath.append(subtreeptr->getName());
                        middleLines.append(generateSubStruct(&currentPath, subtreeptr));
                    } else if(dynamic_cast<Field*>(subtreeptr) != nullptr){
                        //Todo expand later when more fields other than numeric
                        lastLines.append("Number* ");
                        lastLines.append(subtreeptr->getName());
                        lastLines.append("; // expected format: ");
                        lastLines.append(subtreeptr->getValue());
                    }
                    children.erase(children.begin());
                }
                lastLines.append("\n} ");
                lastLines.append(structname);
                lastLines.append("_t;\n\n");
            }
            else if(dynamic_cast<Field*>(treeptr) != nullptr){
                //Todo expand later when more fields other than numeric
                lastLines.append("Number* ");
                lastLines.append(treeptr->getName());
                lastLines.append("; // expected format: ");
                lastLines.append(treeptr->getValue());
                lastLines.append("\n");
            }
            dataStructures.erase(dataStructures.begin());
        }

        // Write to the file
        outputFile << firstLines;
        outputFile << middleLines;
        outputFile << lastLines;

        // Close the file
        outputFile.close();
    }

    bool presentInArgs(int argc, char** argv, string element){
        for(int i = 0; i < argc; ++i){
            if (argv[i] == element){
                return true;
            }
        }
        return false;
    }
}