#include "llvm/IR/Module.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/IR/IRBuilder.h"
#include <map>
#include <string>

#ifndef BCMODULE_H
#define BCMODULE_H

class BCModule : public llvm::Module {

    friend class BCBuilder;

private:
    llvm::FunctionCallee* printf_func;
    // marshalling
    llvm::FunctionCallee* marshall_int_func;
    // assignment
    llvm::FunctionCallee* assign_int_func;
    llvm::FunctionCallee* assign_number_func;
    llvm::FunctionCallee* assign_picture_func;

    llvm::FunctionCallee* add_int_func;

    llvm::StructType* numberStructType;
    llvm::StructType* pictureStructType;

    std::map<std::string, llvm::Function*> function_shadow_symbol_table;

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
            assign_int_func(nullptr),
            assign_number_func(nullptr),
            assign_picture_func(nullptr),
            numberStructType(nullptr),
            pictureStructType(nullptr),
            function_shadow_symbol_table() {
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

    /**
     * @return Returns the function callee for marshalling bstd_numbers to integers.
     */
    llvm::FunctionCallee* getMarshallIntFunc();

    /**
     * @return Returns the function callee for marshalling bstd_pictures to c-style strings.
     */
    llvm::FunctionCallee* getPictureToCStrFunc();

    /**
     * @return Returns the function callee for assigning integers to bstd_numbers.
     */
    llvm::FunctionCallee* getAssignIntFunc();

    /**
     * @return Returns the function callee for adding and integer to a bstd_numbers (bstd_add_int(bstd_number*, int)).
     */
    llvm::FunctionCallee* getAddIntFunc();

    /**
     * @return Returns the function callee for assigning c-style strings to bstd_pictures.
     */
    llvm::FunctionCallee* getAssignCStrFunc();

    /**
     * Finds a procedure (function) by its name, case-insensitive. Procedures can not be overloaded.
     * @param procedure_name The name of the function to find.
     * @return Returns a pointer to the function with the specified name, or nullptr if no such function could be found.
     */
    llvm::Function* findProcedure(const std::string& procedure_name);

};

#endif