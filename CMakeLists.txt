project(crossover)

# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# add spdlog
find_package(spdlog REQUIRED)

# add LLVM
find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})
# end add llvm


set(CMAKE_CXX_STANDARD 17)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/antlr/antlr-4.11.1-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(SampleGrammarLexer ${CMAKE_CURRENT_SOURCE_DIR}/grammar/BabyCobol.g4 LEXER
        PACKAGE build)
#antlr_target(SampleGrammarParser TParser.g4 PARSER
#        PACKAGE antlrcpptest
#        DEPENDS_ANTLR SampleGrammarLexer
#        COMPILE_FLAGS -lib ${ANTLR_SampleGrammarLexer_OUTPUT_DIR})

# include generated files in project environment
include_directories(${ANTLR_SampleGrammarLexer_OUTPUT_DIR})

add_executable(output main.cpp
        src/visitor/Visitor.cpp
        src/visitor/Visitor.h
        src/ir/bcmodule.cpp
        src/Exceptions/NotImplemented.h
        src/Exceptions/CompileException.h
        src/datastructures/DataTree.cpp
        src/datastructures/DataTree.h
        include/antlr/BabyCobolLexer.h
        include/antlr/BabyCobolLexer.cpp
        include/antlr/BabyCobolParser.h
        include/ir/bcmodule.h
        include/antlr/BabyCobolParser.cpp
        src/Exceptions/CompileException.h
        src/datastructures/Field.cpp
        src/datastructures/Field.h
        src/datastructures/Record.cpp
        src/datastructures/Record.h
        include/utils/utils.h
        src/utils/utils.cpp
        src/Exceptions/CompileException.h
        lib/src/arithmetic.cpp
        lib/include/arithmetic.h
        lib/include/number.h
        src/datastructures/Field.cpp
        src/datastructures/Field.h
        src/datastructures/Record.cpp
        src/datastructures/Record.h
        lib/include/picutils.h
        lib/include/picture.h
        lib/src/picutils.cpp
        include/ir/bcbuilder.h
        src/ir/bcbuilder.cpp)
llvm_map_components_to_libnames(llvm_libs ${LLVM_TARGETS_TO_BUILD} support core irreader codegen mc mcparser option)
target_link_libraries(output antlr4_static ${llvm_libs} spdlog::spdlog)