#include "llvm/IR/Module.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/IR/IRBuilder.h"


#ifndef BCMODULE_H
#define BCMODULE_H

class BCModule : public llvm::Module {

private:
    llvm::FunctionCallee* printf_func;
    llvm::FunctionCallee* prog_says_func;
    llvm::FunctionCallee* fib_func;

private:

    /**
     * @brief Initializes this module
     * 
     */
    void initialize();

public:

    BCModule(llvm::StringRef ModuleID, llvm::LLVMContext& C) : llvm::Module(ModuleID, C), printf_func(nullptr) {
        initialize();
    };

    /**
     * @brief Gets a reference to the IR printf function
     * 
     * @return llvm::FunctionCallee* 
     */
    llvm::FunctionCallee* getPrintf();


    /**
     * @brief pls remove me
     */
    llvm::FunctionCallee* getProgSays();

    /**
     * @brief pls remove me
     */
    llvm::FunctionCallee* getFib();

//    perhaps not even needed
//
//    /**
//     * @brief Overload of {@link BCModule::get @endlink}. Returns nullptr if the specified tokenstate is not of identifier type
//     *
//     * @param identifier The identifier to get the Value of
//     * @param builder The IR builder with which to insert any necessary IR
//     * @param typeHint The type a new value instance should assume
//     * @param defaultValue The default numeric value
//     * @return llvm::Value* Returns the Value corresponding to this identifier
//     */
/// llvm::Value* get(std::string identifier, llvm::IRBuilder<>* builder, TokenType typeHint = TokenType::LITERAL_STRING, float defaultValue = 0.f); reimplement hint later
//
//    llvm::Value* get(std::string identifier, llvm::IRBuilder<>* builder, float defaultValue = 0.f);

    /**
     * @brief Gets the Value corresponding to the specified identifier. If a corresponding Value does not exist, it is created, and its formatting is inferred.
     * 
     * @param identifier The identifier to get the Value of
     * @param builder The IR builder with which to insert any necessary IR
     * @param typeHint The type a new value instance should assume
     * @param defaultValue The default numeric value
     * @return llvm::Value* Returns the Value corresponding to this identifier
     */
//         llvm::Value* get(std::string identifier, llvm::IRBuilder<>* builder, TokenType typeHint = TokenType::LITERAL_STRING, float defaultValue = 0.f); reimplement with hint later
    llvm::Value* get(std::string identifier, llvm::IRBuilder<>* builder, float defaultValue = 0.f);



};

#endif