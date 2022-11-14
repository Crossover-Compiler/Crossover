#include <iostream>
#include <csignal>
#include "src/visitor/Visitor.h"
#include "include/antlr/BabyCobolParser.h"
#include "include/antlr/BabyCobolLexer.h"
#include "antlr4-runtime.h"
#include <llvm/IR/BasicBlock.h>
#include "include/ir/bcmodule.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Function.h"
#include <llvm/IR/Constants.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/GlobalVariable.h>
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"

#include "llvm/ADT/Optional.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include <map>
#include <memory>
#include <system_error>
#include <vector>



using namespace std;
using namespace antlr4;
using namespace llvm;
using namespace llvm::sys;


// TODO: pls move me to somewhere sensible
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
        string subtreetype = typeid(*subtreeptr).name();
        if(subtreetype == "6Record"){
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
        } else if(subtreetype == "5Field"){
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
    ofstream outputFile("BBCBLAPI.h");

    string firstLines = "// Generated with Crossover\n"
                        "\n// ***"
                        "\n// Include lib files here"
                        "\n// ***"
                        "\n";

    string middleLines= "\n" ;
    string lastLines = "\n";

    while(!dataStructures.empty()){
        DataTree* treeptr = dataStructures[0];
        string currentype = typeid(*treeptr).name();
        string structname = treeptr->getName();
        if (currentype == "6Record"){
            lastLines.append("typedef struct ");
            lastLines.append(structname);
            lastLines.append("_t {");
            //add members here
            vector<DataTree*> children = treeptr->getNext();
            while(!children.empty()){
                lastLines.append("\n\t");
                DataTree* subtreeptr = children[0];
                string subtreetype = typeid(*subtreeptr).name();
                if(subtreetype == "6Record"){
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
                } else if(subtreetype == "5Field"){
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
        else if(currentype == "5Field"){
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

int main() {
    cout << "Starting Compiler..." << endl;

    ifstream stream;
    stream.open("../test/picture.txt");
    ANTLRInputStream input(stream);
    BabyCobolLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    BabyCobolParser parser(&tokens);

    BabyCobolParser::ProgramContext* tree = parser.program();


    // init  llvm
    llvm::LLVMContext* llvmContext = new llvm::LLVMContext();
    BCModule* llvmModule = new BCModule("module", *llvmContext);

    llvm::FunctionType* FT = llvm::FunctionType::get(llvm::Type::getVoidTy(*llvmContext), false);
    llvm::Function* F = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "main", llvmModule);
    // Run compiler
    llvm::BasicBlock* block = llvm::BasicBlock::Create(*llvmContext, "root_block", F);


    llvm::IRBuilder<> builder(llvmModule->getContext());
    builder.SetInsertPoint(block);

    Visitor visitor(llvmModule, &builder);
    visitor.visitProgram(tree);

    cout << "Finished Compiling!" << endl;

    llvmModule->print(llvm::outs(), nullptr);


    // The following code allows us to compile the IR into C object files

    InitializeAllTargetInfos();
    InitializeAllTargets();
    InitializeAllTargetMCs();
    InitializeAllAsmParsers();
    InitializeAllAsmPrinters();

    auto TargetTriple = sys::getDefaultTargetTriple();
    llvmModule->setTargetTriple(TargetTriple);

    std::string Error;
    auto Target = TargetRegistry::lookupTarget(TargetTriple, Error);

    // Print an error and exit if we couldn't find the requested target.
    // This generally occurs if we've forgotten to initialise the
    // TargetRegistry or we have a bogus target triple.

    if (!Target) {
        errs() << Error;
        return 1;
    }
    auto CPU = "generic";
    auto Features = "";

    TargetOptions opt;
    auto RM = Optional<Reloc::Model>(Reloc::PIC_);
    auto TheTargetMachine =
            Target->createTargetMachine(TargetTriple, CPU, Features, opt, RM);

    llvmModule->setDataLayout(TheTargetMachine->createDataLayout());

    auto Filename = "output.o";
    std::error_code EC;
    raw_fd_ostream dest(Filename, EC, sys::fs::OF_None);

    if (EC) {
        errs() << "Could not open file: " << EC.message();
        return 1;
    }

    legacy::PassManager pass;
    auto FileType = CGFT_ObjectFile;

    if (TheTargetMachine->addPassesToEmitFile(pass, dest, nullptr, FileType)) {
        errs() << "TheTargetMachine can't emit a file of this type";
        return 1;
    }

    pass.run(*llvmModule);
    dest.flush();

    outs() << "Wrote " << Filename << "\n";

//TODO: invoke gcc or clang++ here to link the object files

    generateStructs(visitor.dataStructures);


    return 0;
}

