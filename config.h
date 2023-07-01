//
// Created by manzi on 6/20/23.
//

#ifndef CROSSOVER_CONFIG_H
#define CROSSOVER_CONFIG_H

#define LABEL_MAIN              "main"
#define CROSSOVER_VERSION       "v0.1"

// program arguments
#define FLAG_HELP               "--help"            // prints a help message and exits
#define FLAG_HELP_SHORT         "-?"
#define FLAG_HELP_UNHELPFUL     "-🤔"
#define FLAG_VERBOSE            "--verbose"         // print more messages to STD out
#define FLAG_VERBOSE_SHORT      "-v"
#define FLAG_NOT_MAIN           "--no-entry"        // specifies that the entry point for the executable artefact is in one of the linked objects (see --link).
#define FLAG_GEN_STRUCTS        "--generate-structs"// generates the C headers from BabyCobol data divisions in the source files
#define FLAG_GEN_STRUCTS_SHORT  "-g"
#define FLAG_LINK_OBJECTS       "--link"            // the object files we want to include when linking
#define FLAG_LINK_OBJECTS_SHORT "-l"
#define FLAG_EMIT_LLVM          "-emit-llvm"        // Clang-like argument to emit llvm IR to the specified file
#define FLAG_EMIT_DEBUG         "--debug"           // Enable debug symbols in the artefact
#define FLAG_EMIT_DEBUG_SHORT   "-d"
#define FLAG_OUTPUT             "--out"             // specifies the executable artefact's filename
#define FLAG_OUTPUT_SHORT       "-o"

#define MSG_HELP                "USAGE: crossover <src...> <options>\n\nWhere <src...> are the space-separated (relative) paths to the BabyCobol source files. Does not support directories.\n\nOPTIONS:\n\n--help, -?, -🤔: Display this help message and exit.\n\n--verbose, -v: Print more messages to STD out.\n\n--out, -o <filename>: Specifies the output filename.\n\n-emit-llvm <filename>: Writes the generated LLVM IR to the specified file.\n\n--debug, -d: Include debug symbols in the executable artefact.\n\n--link <filename...>, -l <filename...>: Specifies the object files to include in linking.\n\n--generate-structs, -g: If set, crossover will generate C headers for the data divisions in the BabyCobol source files.\n\n--no-entry : specifies that the entry point of the executable artefact is in the specified object files (see --link)."

#endif //CROSSOVER_CONFIG_H
