#include "llvm/IR/Module.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/IR/IRBuilder.h"
#include "../model/DataEntry.h"
#include <map>
#include <string>

#ifndef BCMODULE_H
#define BCMODULE_H

class BCModule : public llvm::Module {

    friend class BCBuilder;
    friend class DataDivisionVisitor;

private:
    llvm::FunctionCallee* printf_func;
    llvm::FunctionCallee* pow_func; // double pow (double base, double exponent); (C99)

    // marshalling
    llvm::FunctionCallee* marshall_int_func;
    llvm::FunctionCallee* marshall_double_func;

    // assignment
    llvm::FunctionCallee* assign_int_func;
    llvm::FunctionCallee* assign_double_func;
    llvm::FunctionCallee* assign_cstr_to_picture_func;
    llvm::FunctionCallee* assign_number_func;
    llvm::FunctionCallee* assign_picture_func;

    llvm::FunctionCallee* add_int_func;

    llvm::StructType* numberStructType;
    llvm::StructType* pictureStructType;

    std::map<std::string, llvm::Function*> function_shadow_symbol_table;
    std::map<std::string, DataEntry*> data_entry_shadow_symbol_table;

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
            pow_func(nullptr),
            marshall_int_func(nullptr),
            marshall_double_func(nullptr),
            assign_int_func(nullptr),
            assign_double_func(nullptr),
            assign_cstr_to_picture_func(nullptr),
            assign_number_func(nullptr),
            assign_picture_func(nullptr),
            numberStructType(nullptr),
            pictureStructType(nullptr),
            function_shadow_symbol_table(),
            data_entry_shadow_symbol_table() {
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
     * @return Returns the function callee for marshalling bstd_numbers to integers.
     */
    llvm::FunctionCallee* getMarshallIntFunc();

    /**
     * @return Returns the function callee for marshalling bstd_numbers to doubles.
     */
    llvm::FunctionCallee* getMarshallDoubleFunc();

    /**
     * @return Returns the function callee for marshalling bstd_pictures to c-style strings.
     */
    llvm::FunctionCallee* getPictureToCStrFunc();

    /**
     * @return Returns the function callee for assigning integers to bstd_numbers.
     */
    llvm::FunctionCallee* getAssignIntFunc();

    /**
     * @return Returns the function callee for assigning doubles to bstd_numbers.
     */
    llvm::FunctionCallee* getAssignDoubleFunc();

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

    /**
     * Finds a data entry (record or field) by its name, case-insensitive.
     * @param procedure_name The name of the data entry to find.
     * @return Returns the data entry with the specified name, or nullptr if no such data entry could be found.
     */
    DataEntry* findDataEntry(const std::string& name);

    std::map<std::string, DataEntry*> getDataSymbolTable();

};

#endif