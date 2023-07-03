#include <iostream>
#include "include/visitor/ProcedureVisitor.h"
#include "include/exception/CompileException.h"
#include "include/utils/Utils.h"
#include "include/antlr/BabyCobolParser.h"
#include "include/antlr/BabyCobolLexer.h"
#include "antlr4-runtime.h"
#include <llvm/IR/BasicBlock.h>
#include "include/ir/BCModule.h"
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
#include "llvm/Transforms/InstCombine/InstCombine.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/Transforms/Utils.h"
#include "llvm/ADT/Optional.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Type.h"
#include "include/visitor/DataDivisionVisitor.h"
#include "include/visitor/IdentificationVisitor.h"
#include <map>
#include <system_error>
#include <vector>
#include "config.h"

using namespace std;
using namespace antlr4;
using namespace llvm;
using namespace llvm::sys;

int main(int argc, char **argv) {

    const auto configuration = utils::getConfiguration(argc, argv);

    if (configuration.help) {
        cout << MSG_HELP << endl;
        return 0;
    }

    cout << "crossover " << CROSSOVER_VERSION << endl;

    // build external symbol map
    map<string,vector<string>> extTable;
    for (auto & element : configuration.link_objects) {
        string execCommand = "nm --demangle ";
        string nmOutput = utils::exec(execCommand.append(element));
        vector<string> textSymbols = utils::extractTextSymbols(nmOutput); // gather all T and t
        string programName = utils::extractProgramNameFromPath(element); // get program name from the input
        extTable.insert({programName, textSymbols});
    }
    // end build external symbol map

    vector<string> bcInputs = configuration.src_files;

    ifstream stream;

    // todo: support multiple source files
    stream.open(bcInputs[0]);

    if (!stream.is_open()) {
        throw CompileException("File \"" + bcInputs[0] + "\" not found");
    }

    std::cout << "Compiling first stage..." << std::endl;

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

    const std::string program_id = identificationVisitor.getProgramId();

    if (configuration.generate_structs) {

        const std::string filename = utils::generateStructs(bcInputs[0], module->getDataSymbolTable(), program_id);

        cout << "Wrote generated structs to " << filename << endl;

        return 0;
    }

    ProcedureVisitor procedureVisitor(module, &builder, &extTable);
    procedureVisitor.visitProgram(ast);

    // insert return on init function
    builder.SetInsertPoint(block);
    builder.CreateRetVoid();

    // insert call to initialize function if BabyCobol is the entry point
    if (!configuration.not_main) {
        if (auto main_procedure = module->findProcedure(LABEL_MAIN)) {
            builder.SetInsertPoint(&main_procedure->getBasicBlockList().front().front());
            builder.CreateCall(init_function);
        } else {
            if (configuration.verbose) {
                cout << "Could not find entry point \"" << LABEL_MAIN
                     << "\"! If this is intentional, please specify the -not-main compiler flag." << endl;
            }
        }
    }

    if (!configuration.emit_llvm.empty()) {

        std::error_code error;
        raw_fd_ostream file(configuration.emit_llvm, error, sys::fs::OF_None);

        if (error) {

            errs() << "Failed to write LLVM IR: " << error.message();

            return error.value();
        }

        module->print(file, nullptr, false, configuration.debug);

        file.close();

        std::cout << "Wrote LLVM IR to " << configuration.emit_llvm << std::endl;
    }

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

    auto object_filename = program_id + ".o";
    std::error_code EC;
    raw_fd_ostream dest(object_filename, EC, sys::fs::OF_None);

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

    // Promote allocas to registers.
    pass.add(createPromoteMemoryToRegisterPass());
    // Do simple "peephole" optimizations and bit-twiddling optimizations.
    pass.add(createInstructionCombiningPass());
    // Reassociate expressions.
    pass.add(createReassociatePass());

    std::cout << "Compiling second stage..." << std::endl;

    pass.run(*module);

    dest.close();

    if (configuration.verbose) {
        std::cout << "Wrote " << object_filename << "\n";
    }

    std::cout << "Linking objects and creating executable..." << endl;

    std::string executable_filename;

    if (!configuration.out.empty()) {
        executable_filename = configuration.out;
    } else {
        executable_filename = "exec";
    }

    // todo: handle multiple object files (from multiple sources)
    std::string linkCommand = "clang -o " + executable_filename + " " + object_filename + " -lbstd -lm";

    for (auto &element : configuration.link_objects) {
        linkCommand.append(" ");
        linkCommand.append(element);
    }

    if (configuration.verbose) {
        std::cout << linkCommand << std::endl;
    }

    auto result = utils::exec(linkCommand);

    if (configuration.verbose) {
        std::cout << "Linking done." << std::endl;
    }

    std::cout << "Compilation successful. Wrote executable to file " << executable_filename << std::endl;

    return 0;
}
