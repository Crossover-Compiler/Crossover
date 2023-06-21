//
// Created by bruh on 14-11-22.
//

#include "../../include/utils/utils.h"
#include "../Exceptions/CompileException.h"
#include "../../config.h"

using namespace std;

namespace utils{

    void genField(string* targetText, Field* field) {
        if (field->isNumber()) {
            targetText->append("bstd_number* ");
            targetText->append(field->getName());
            targetText->append(";\t\t// expected format:\t");
            targetText->append(field->getMask());
            targetText->append("\r\n");
        } else {
            targetText->append("bstd_picture* ");
            targetText->append(field->getName());
            targetText->append(";\t\t// expected format:\t");
            targetText->append(field->getMask());
            targetText->append("\r\n");
        }
    }

    string generateSubStruct(string* ancestorsPtr, Record *record) {

        string result;
        string name = record->getName();
        result.append("typedef struct");
        result.append(" ");
        result.append(*ancestorsPtr);
        result.append(" {");

        vector<DataEntry*> children = record->getChildren();

        for (auto child : children) {

            result.append("\n\t");

            if(auto rec = dynamic_cast<Record*>(child)){

                string ancestors = *ancestorsPtr;
                result.append(ancestors);
                result.append("_");
                result.append(rec->getName());
                result.append("* ");
                result.append(rec->getName());
                result.append(";");
                ancestors.append("_");
                ancestors.append(rec->getName());
                result.insert(0, generateSubStruct(&ancestors ,rec)); // generate substructs recursively and prepend to result

            } else if(auto field = dynamic_cast<Field*>(child)){
                genField(&result, field);
            }
        }

        result.append("\n} ");
        result.append(*ancestorsPtr);
        result.append("_t;\n\n");
        return result;
    }

    string generateStructs(const string& source, const map<string, DataEntry*>& symbol_table, const string& program_id) {

        std::string filename = program_id + ".h";

        std::ofstream outputFile(filename);

        string firstLines = "/*\r\n"
                            "* Auto-generated with crossover\r\n"
                            "* compiler version\t:\t" CROSSOVER_VERSION "\r\n"
                            "* source file\t\t:\t" + source + "\r\n"
                            "*/\r\n"

                            "// ***\r\n"
                            "// Include headers for the BSTD types here e.g.:\r\n"
                            "//#include \"../Crossover_bstd_lib/include/number.h\"\r\n"
                            "//#include \"../Crossover_bstd_lib/include/picture.h\"\r\n"
                            "// ***\r\n";

        string middleLines = "\n";
        string lastLines = "\n";

        for(const auto& mapEntry : symbol_table) {

            const auto dataEntry = mapEntry.second;

            if (auto record = dynamic_cast<Record*>(dataEntry)) {

                string struct_name = dataEntry->getName();

                lastLines.append("typedef struct ");
                lastLines.append(struct_name);
                lastLines.append(" {");

                vector<DataEntry*> children = record->getChildren();

                for (auto child : children) {

                    lastLines.append("\n\t");

                    if(auto child_record = dynamic_cast<Record*>(child)) {

                        lastLines.append(struct_name);
                        lastLines.append("_");
                        lastLines.append(child_record->getName());
                        lastLines.append("* ");
                        lastLines.append(child_record->getName());
                        lastLines.append(";");

                        string currentPath = struct_name;
                        currentPath.append("_");
                        currentPath.append(child_record->getName());
                        middleLines.append(generateSubStruct(&currentPath, child_record));

                    } else if(auto field = dynamic_cast<Field*>(child)) {
                        genField(&lastLines, field);
                    }

                }
                lastLines.append("\n} ");
                lastLines.append(struct_name);
                lastLines.append("_t;\n\n");

            } else if(auto field = dynamic_cast<Field*>(dataEntry)) {
                genField(&lastLines, field);
            }

        }

        // Write to the file
        outputFile << firstLines;
        outputFile << middleLines;
        outputFile << lastLines;

        // Close the file
        outputFile.close();

        return filename;
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