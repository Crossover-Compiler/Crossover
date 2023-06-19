//
// Created by bruh on 14-11-22.
//

#include "../../include/utils/utils.h"
#include "../Exceptions/CompileException.h"

using namespace std;

namespace utils{

    string generateSubStruct(string* ancestorsPtr, Record *record) {

        string result;
        string name = record->getName();
        result.append("typedef struct");
        result.append(" ");
        result.append(*ancestorsPtr);
        result.append("_t {");

        vector<DataEntry*> children = record->getChildren();

        for (auto child : children) {

            result.append("\n\t");

            if(auto record = dynamic_cast<Record*>(child)){

                string ancestors = *ancestorsPtr;
                result.append(ancestors);
                result.append("_");
                result.append(record->getName());
                result.append("_t* ");
                result.append(record->getName());
                result.append(";");
                ancestors.append("_");
                ancestors.append(record->getName());
                result.insert(0, generateSubStruct(&ancestors ,record)); // generate substructs recursively and prepend to result

            } else if(auto field = dynamic_cast<Field*>(child)){

                if(field->isNumber()) {

                    result.append("bstd_number* ");
                    result.append(field->getName());
                    result.append("; // expected format: ");
                    result.append(field->getMask());

                } else {

                    result.append("bstd_picture* ");
                    result.append(field->getName());
                    result.append("; // expected format: ");
                    result.append(field->getMask());
                }

            }

        }

        result.append("\n} ");
        result.append(*ancestorsPtr);
        result.append("_t;\n\n");
        return result;
    }

    void generateStructs(map<string, DataEntry*> symbol_table) {

        // todo: use program name or file name here
        std::ofstream outputFile("BBCBLAPI.h");

        string firstLines = "// Generated with Crossover\n"
                            "\n// ***"
                            "\n// Include lib files here"
                            "\n// ***"
                            "\n";

        string middleLines= "\n";
        string lastLines = "\n";

        for(const auto& mapEntry : symbol_table) {

            const auto dataEntry = mapEntry.second;

            if (auto record = dynamic_cast<Record*>(dataEntry)) {

                string struct_name = dataEntry->getName();

                lastLines.append("typedef struct ");
                lastLines.append(struct_name);
                lastLines.append("_t {");

                vector<DataEntry*> children = record->getChildren();

                for (auto child : children) {

                    lastLines.append("\n\t");

                    if(auto child_record = dynamic_cast<Record*>(child)) {

                        lastLines.append(struct_name);
                        lastLines.append("_");
                        lastLines.append(child_record->getName());
                        lastLines.append("_t* ");
                        lastLines.append(child_record->getName());
                        lastLines.append(";");

                        string currentPath = struct_name;
                        currentPath.append("_");
                        currentPath.append(child_record->getName());
                        middleLines.append(generateSubStruct(&currentPath, child_record));

                    } else if(auto field = dynamic_cast<Field*>(child)) {

                        if(field->isNumber()) {

                            lastLines.append("bstd_number* ");
                            lastLines.append(field->getName());
                            lastLines.append("; // expected format: ");
                            lastLines.append(field->getMask());

                        } else {

                            lastLines.append("bstd_picture* ");
                            lastLines.append(field->getName());
                            lastLines.append("; // expected format: ");
                            lastLines.append(field->getMask());
                        }
                    }

                }
                lastLines.append("\n} ");
                lastLines.append(struct_name);
                lastLines.append("_t;\n\n");

            } else if(auto field = dynamic_cast<Field*>(dataEntry)) {

                if(field->isNumber()) {

                    lastLines.append("bstd_number* ");
                    lastLines.append(field->getName());
                    lastLines.append("; // expected format: ");
                    lastLines.append(field->getMask());

                } else {

                    lastLines.append("bstd_picture* ");
                    lastLines.append(field->getName());
                    lastLines.append("; // expected format: ");
                    lastLines.append(field->getMask());

                }
            }

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
                string filename = path.substr(i+1);
                string result = filename.substr(0 ,filename.length()-2);
                return result;
            }
        }
        throw CompileException("Invalid path for program name");
    }
}