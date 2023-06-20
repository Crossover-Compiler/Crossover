#include <iostream>
#include "src/visitor/ProcedureVisitor.h"
#include "src/Exceptions/CompileException.h"
#include "include/utils/utils.h"
#include "include/antlr/BabyCobolParser.h"
#include "include/antlr/BabyCobolLexer.h"
#include "antlr4-runtime.h"
#include <llvm/IR/BasicBlock.h>
#include "include/ir/bcmodule.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Function.h"
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
#include "src/visitor/DataDivisionVisitor.h"
#include "src/visitor/IdentificationVisitor.h"
#include <map>
#include <system_error>
#include <vector>
#include "config.h"

using namespace std;
using namespace antlr4;
using namespace llvm;
using namespace llvm::sys;
using namespace utils;

int main(int argc, char **argv) {

    cout << "crossover " << CROSSOVER_VERSION << endl;

    // build external symbol map
    vector<string> externalFiles = utils::getArgumentParams(argc, argv, "--external");
    map<string,vector<string>> extTable;
    for (auto & element : externalFiles) {
        string execCommand = "nm --demangle ";
        string nmOutput = exec(execCommand.append(element));
        vector<string> textSymbols = utils::extractTextSymbols(nmOutput); // gather all T and t
        string programName = extractProgramNameFromPath(element); // get program name from the input
        extTable.insert({programName, textSymbols});
    }
    // end build external symbol map

    string bcInput = argv[1];

    ifstream stream;

    stream.open(bcInput);
    if (!stream.is_open()) {
        throw CompileException("File \"" + bcInput + "\" not found");
    }

    ANTLRInputStream input(stream);
    BabyCobolLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    BabyCobolParser parser(&tokens);

    BabyCobolParser::ProgramContext* ast = parser.program();

    // init  llvm
    auto llvmContext = new llvm::LLVMContext();
    auto module = new BCModule("module", *llvmContext);

    llvm::FunctionType* FT = llvm::FunctionType::get(llvm::Type::getVoidTy(*llvmContext), false);
    llvm::Function* init_function = llvm::Function::Create(FT, llvm::Function::ExternalLinkage, "init", module);

    // Run compiler
    llvm::BasicBlock* block = llvm::BasicBlock::Create(*llvmContext, "", init_function);

    BCBuilder builder(module, block);

    IdentificationVisitor identificationVisitor;
    identificationVisitor.visitProgram(ast);

    DataDivisionVisitor dataDivisionVisitor(module, &builder);
    dataDivisionVisitor.visitProgram(ast);

    const bool generate_structs = presentInArgs(argc, argv, "-generate-structs");

    if (generate_structs) {

        const std::string program_id = identificationVisitor.getProgramId();

        const std::string filename = generateStructs(bcInput, module->getDataSymbolTable(), program_id);

        cout << "Wrote generated structs to " << filename << endl;
    }

    ProcedureVisitor procedureVisitor(module, &builder, &extTable);
    procedureVisitor.visitProgram(ast);

    // insert return on init function
    builder.SetInsertPoint(block);
    builder.CreateRetVoid();

    // insert call to initialize function if BabyCobol is the entry point
    if (!presentInArgs(argc, argv, "-not-main")) {
        if (auto main_procedure = module->findProcedure(LABEL_MAIN)) {
            builder.SetInsertPoint(&main_procedure->getBasicBlockList().front().front());
            builder.CreateCall(init_function);
        } else {
            cout << "Could not find entry point \"" << LABEL_MAIN << "\"! If this is intentional, please specify the -not-main compiler flag." << endl;
            return 0xD5;
        }
    }

    cout << "Finished Compiling!" << endl;

    module->print(llvm::outs(), nullptr);

    // The following code allows us to compile the IR into C object files

    InitializeAllTargetInfos();
    InitializeAllTargets();
    InitializeAllTargetMCs();
    InitializeAllAsmParsers();
    InitializeAllAsmPrinters();

    auto TargetTriple = sys::getDefaultTargetTriple();
    module->setTargetTriple(TargetTriple);

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

    auto datalayout = TheTargetMachine->createDataLayout();
    module->setDataLayout(datalayout);

    auto filename = "output.o";
    std::error_code EC;
    raw_fd_ostream dest(filename, EC, sys::fs::OF_None);

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

    pass.run(*module);
    dest.flush();

    llvm::outs() << "Wrote " << filename << "\n";

    const string executableName = "exec";
    string linkCommand = "clang output.o libbstd.a -lm -o  " + executableName;

    cout << "Linking objects and creating executable" << endl;
    for (auto &element: externalFiles) {
        linkCommand.append(" ");
        linkCommand.append(element);
    }

    auto result = exec(linkCommand);

    std::cout << "Done." << std::endl << "Wrote executable to file: " << executableName << std::endl;

    return 0;
}

