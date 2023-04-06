//
// Created by bruh on 14-11-22.
//

#include "../../include/utils/utils.h"
#include "../Exceptions/CompileException.h"

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
                auto* subTreePtrAsField = dynamic_cast<Field*>(subtreeptr);
                //Todo expand later when more fields other than numeric
                result.append("Number* ");
                result.append(subTreePtrAsField->getName());
                result.append("; // expected format: ");
                result.append(subTreePtrAsField->getValue());
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
                        auto* subTreePtrAsField = dynamic_cast<Field*>(subtreeptr);
                        lastLines.append("Number* ");
                        lastLines.append(subTreePtrAsField->getName());
                        lastLines.append("; // expected format: ");
                        lastLines.append(subTreePtrAsField->getValue());
                    }
                    children.erase(children.begin());
                }
                lastLines.append("\n} ");
                lastLines.append(structname);
                lastLines.append("_t;\n\n");
            }
            else if(dynamic_cast<Field*>(treeptr) != nullptr){
                auto* treePtrAsField = dynamic_cast<Field*>(treeptr);
                //Todo expand later when more fields other than numeric
                lastLines.append("Number* ");
                lastLines.append(treePtrAsField->getName());
                lastLines.append("; // expected format: ");
                lastLines.append(treePtrAsField->getValue());
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

    std::string exec(string cmdstr) {
        std::array<char, 128> buffer;
        std::string result;
        const char* cmd = cmdstr.c_str();
        std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
        if (!pipe) {
            throw std::runtime_error("popen() failed!");
        }
        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
            result += buffer.data();
        }
        return result;
    }

    vector<string> getArgumentParams(int argc, char** argv, string arg){
        vector<string> result;
        bool argSeen = false;
        for(int i = 0; i < argc; ++i){
            std::string current = argv[i];
            if (argv[i] == arg){
                argSeen = true;
            }
            else if (argSeen && current.rfind("--", 0) != 0 && current.rfind("-", 0) != 0){
                result.push_back(current);
            }
        }
        return result;
    };

    vector<string> split(string& s, string delimiter) {
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

    vector<string> extractTextSymbols(string& input){
        //filter on things that have either t or T
        vector<string> completeTable = split(input, "\n");
        vector<string> result;
        for (auto & element : completeTable) {
            if (element.find(" T ") != std::string::npos) {
                result.push_back(element.substr(element.find(" T ") + 3));
            } else if ((element.find(" t ") != std::string::npos)){
                result.push_back(element.substr(element.find(" t ") + 3));
            }
        }
        return result;
    }

    string extractProgramNameFromPath(string path){
        if(path.find('/') == std::string::npos){
            string result = path.substr(0, path.length()-2); // TODO: Bad way of getting rid of the file extension".o"...
            return result;
        }

        bool encounteredForwardslash = false;
        for (int i = path.length() - 1; i >= 0; i--){
            char currentChar = path[i];
            if (std::strcmp(&currentChar, "/") == 0){
                encounteredForwardslash = true;
            }
            if (encounteredForwardslash){
                string filename = path.substr(i);
                string result = filename.substr(i-1 ,filename.length()-3);
                return result;
            }
        }
        throw CompileException("Invalid path for program name");
    }
}