//
// Created by bruh on 14-11-22.
//

#include <list>
#include "../../include/utils/utils.h"
#include "../Exceptions/CompileException.h"
#include "../../config.h"
#include <spdlog/spdlog.h>

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

    /**
     * Check program arguments for presence of the specified flags.
     *
     * @param argc The program argument count.
     * @param argv The program arguments.
     * @param flags The flags to check for presence.
     * @return Returns true if any of the specified flags is present in the specified program arguments.
     */
    static bool hasFlag(int argc, char** argv, const std::initializer_list<std::string>& flags) {

        for (int i = 0; i < argc; ++i) {
            for (const string& flag: flags) {

                if (argv[i] == flag) {
                    return true;
                }
            }
        }

        return false;
    }

    /**
     * Check program arguments for presence of the specified flag.
     *
     * @param argc The program argument count.
     * @param argv The program arguments.
     * @param flag The flag to check for presence.
     * @return Returns true if the specified flag is present in the specified program arguments.
     */
    static bool hasFlag(int argc, char** argv, const std::string& flag) {
        return hasFlag(argc, argv, {flag});
    }

    /**
      * Get a single program argument for a given flag.
      *
      * @example If the program arguments are [arg0 arg1 --flag0 arg2 arg3 --flag1 arg4], then getFlagArgument(..., ..., "--flag1") returns [arg4].
      * @param argc The number of program arguments.
      * @param argv The program arguments.
      * @param flag The flag for which to collect its argument
      * @return Returns the argument for this flag, or an empty string if there is no argument or the flag is not present in the program arguments.
      */
    static string getFlagArgument(int argc, char** argv, const string& flag) {

        // arguments start at index 1
        for (int i = 1; i < argc; ++i) {

            if (argv[i] == flag) {

                if (i + 1 >= argc) {
                    spdlog::warn("No argument provided for flag %s", flag);
                    return "";
                }

                const std::string& arg = argv[i + 1];

                // if the "argument" starts with a dash, we interpret it as the next flag; we warn that we expected to find an argument here.
                if (arg[0] == '-') {
                    spdlog::warn("No argument is provided, but expected one for flag %s", flag);
                    return "";
                }

                return arg;
            }
        }

        return "";
    }

    /**
      * Get the programs arguments for the given flag synonyms.
      *
      * @example If the program arguments are [arg0 arg1 --flag0 arg2 arg3 --flag1 arg4], then getFlagArguments(..., ..., { "--flag0", "-f0"}) returns [arg2, arg3].
      * Similarly, if the program arguments are [arg0 arg1 --f0 arg2 arg3 --flag1 arg4], then getFlagArguments(..., ..., { "--flag0", "-f0"}) also returns [arg2, arg3].
      * In other words, "--flag0" and "-f0" are synonyms.
      * @param argc The number of program arguments.
      * @param argv The program arguments.
      * @param flag The flag for which to collect its arguments
      * @return Returns the arguments for this flag in-order, or an empty vector if there are no arguments or the flag is not present in the program arguments.
      */
    static vector<std::string> getFlagArguments(int argc, char** argv, const std::initializer_list<std::string>& flags) {

        // arguments start at index 1
        for (int i = 1; i < argc; ++i) {

            for (const std::string& flag : flags) {

                if (argv[i] == flag) {

                    vector<string> arguments;

                    // collect program arguments for the matched flag
                    for (int j = i + 1; j < argc; ++j) {

                        const std::string &arg = argv[j];

                        // if the "argument" starts with a dash, we interpret it as the next flag; we've gathered all params for our target.
                        if (arg[0] == '-') {
                            break;
                        }

                        arguments.push_back(arg);
                    }

                    if (arguments.empty()) {
                        spdlog::warn("No arguments provided for flag %s", flag);
                    }

                    return arguments;
                }
            }
        }

        return {};
    }

    /**
      * Get the programs arguments for a given flag.
      *
      * @example If the program arguments are [arg0 arg1 --flag0 arg2 arg3 --flag1 arg4], then getFlagArguments(..., ..., "--flag0") returns [arg2, arg3].
      * @param argc The number of program arguments.
      * @param argv The program arguments.
      * @param flag The flag for which to collect its arguments
      * @return Returns the arguments for this flag in-order, or an empty vector if there are no arguments or the flag is not present in the program arguments.
      */
    static vector<string> getFlagArguments(int argc, char** argv, const std::string& flag) {
        return getFlagArguments(argc, argv, { flag });
    }


    /**
      * Get the first programs arguments with no flag.
      *
      * @example If the program arguments are [arg0 arg1 --flag0 arg2 arg3 --flag1 arg4], then getDefaultArguments(..., ...) returns [arg0, arg1].
      * @param argc The number of program arguments.
      * @param argv The program arguments.
      * @return Returns the default program arguments in-order, or an empty vector if there are no default program arguments.
      */
    static vector<string> getDefaultArguments(int argc, char** argv) {

        vector<string> arguments;

        // arguments start at index 1
        for (int i = 1; i < argc; ++i) {

            // collect default program arguments until the first flag
            const std::string& arg = argv[i];

            // if the "argument" starts with a dash, we interpret it as the next flag; we've gathered all params for our target.
            if (arg[0] == '-') {
                break;
            }

            arguments.push_back(arg);
        }

        return arguments;
    }

    configuration_t getConfiguration(int argc, char** argv) {
        return configuration_t {
            .src_files = getDefaultArguments(argc, argv),
            .help = hasFlag(argc, argv, { FLAG_HELP, FLAG_HELP_SHORT, FLAG_HELP_UNHELPFUL }),
            .verbose = hasFlag(argc, argv, { FLAG_VERBOSE, FLAG_VERBOSE_SHORT }),
            .not_main = hasFlag(argc, argv, FLAG_NOT_MAIN),
            .generate_structs = hasFlag(argc, argv, { FLAG_GEN_STRUCTS, FLAG_GEN_STRUCTS_SHORT }),
            .link_objects = getFlagArguments(argc, argv, { FLAG_LINK_OBJECTS, FLAG_LINK_OBJECTS_SHORT }),
            .emit_llvm = getFlagArgument(argc, argv, FLAG_EMIT_LLVM),
            .debug = hasFlag(argc, argv, { FLAG_EMIT_DEBUG, FLAG_EMIT_DEBUG_SHORT }),
        };
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