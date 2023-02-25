#include "llvm/IR/Module.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/IR/IRBuilder.h"


#ifndef BCMODULE_H
#define BCMODULE_H

class BCModule : public llvm::Module {

private:
    llvm::FunctionCallee* printf_func;
    llvm::FunctionCallee* marshall_int_func;
    llvm::FunctionCallee* marshall_string_func;
    llvm::FunctionCallee* assign_int_func;

    llvm::StructType* numberStructType;
    llvm::StructType* pictureStructType;

private:

    /**
     * @brief Initializes this module
     * 
     */
    void initialize();

public:

    BCModule(llvm::StringRef ModuleID, llvm::LLVMContext& C):
            llvm::Module(ModuleID, C),
            printf_func(nullptr),
            marshall_int_func(nullptr),
            marshall_string_func(nullptr),
            assign_int_func(nullptr),
            numberStructType(nullptr),
            pictureStructType(nullptr) {
        initialize();
    };

    /**
     * todo: doc
     * @return
     */
    llvm::StructType* getNumberStructType();

    /**
     * todo: doc
     * @return
     */
    llvm::StructType* getPictureStructType();

    /**
     * @brief Gets a reference to the IR printf function
     *
     * @return llvm::FunctionCallee*
     */
    llvm::FunctionCallee* getPrintf();

    /**
     * todo: doc
     * @return
     */
    llvm::FunctionCallee* getPrintNumber();

    /**
     * todo: doc
     * @return
     */
    llvm::FunctionCallee* getPrintPicture();

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

    llvm::FunctionCallee* getMarshallIntFunc();
    llvm::FunctionCallee* getMarshallStringFunc();

    llvm::FunctionCallee* getAssignIntFunc();

};

#endif