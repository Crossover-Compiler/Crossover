#include "../../../Crossover/include/ir/bcmodule.h"
#include "spdlog/spdlog.h"
#include "llvm/IR/IRBuilder.h"

void BCModule::initialize() {

    llvm::Type* int8_t = llvm::Type::getInt8Ty(this->getContext());
    llvm::Type* int8ptr_t = llvm::Type::getInt8PtrTy(this->getContext());
    llvm::Type* int32_t = llvm::Type::getInt32Ty(this->getContext());
    llvm::Type* int64_t = llvm::Type::getInt64Ty(this->getContext());
    llvm::Type* double_type = llvm::Type::getDoubleTy(this->getContext());
    llvm::Type* void_t = llvm::Type::getVoidTy(this->getContext());

    // instantiate printf function
    llvm::FunctionType* printf_type = llvm::FunctionType::get(int32_t, { int8ptr_t }, true);
    this->printf_func = new llvm::FunctionCallee();
    *(this->printf_func) = this->getOrInsertFunction("printf", printf_type);

    // instantiate bstd struct types and functions

    // create number struct type
    llvm::ArrayRef<llvm::Type*> number_struct_types = {
            int64_t,    // value
            int64_t,    // scale
            int8_t,     // length
            int8_t,     // isSigned
            int8_t,     // positive
    };
    this->numberStructType = llvm::StructType::create(this->getContext(), number_struct_types, "Struct.Number");

    // Create instance of Picture struct
    llvm::ArrayRef<llvm::Type*>* picture_struct_types = new llvm::ArrayRef(new llvm::Type*[]{
            int8ptr_t,// bytes
            int8ptr_t,// bytes
            int8_t,         // length
    }, 3);

    this->pictureStructType = llvm::StructType::create(this->getContext(), *picture_struct_types, "Struct.Picture");

    llvm::Type* number_struct_ptr_t = llvm::PointerType::get(this->numberStructType, 0);
    llvm::Type* picture_struct_ptr_t = llvm::PointerType::get(this->pictureStructType, 0);

    // instantiate marshalling functions
    llvm::FunctionType *n_to_i_types = llvm::FunctionType::get(int64_t, number_struct_ptr_t, false);
    this->marshall_int_func = new llvm::FunctionCallee();
    *(this->marshall_int_func) = this->getOrInsertFunction("bstd_number_to_int", n_to_i_types);

    llvm::FunctionType *n_to_double_types = llvm::FunctionType::get(double_type, number_struct_ptr_t, false);
    this->marshall_double_func = new llvm::FunctionCallee();
    *(this->marshall_double_func) = this->getOrInsertFunction("bstd_number_to_double", n_to_double_types);

    // instantiate assignment functions
    llvm::FunctionType *assign_i_to_n_types = llvm::FunctionType::get(void_t, { number_struct_ptr_t, int64_t }, false);
    this->assign_int_func = new llvm::FunctionCallee();
    *(this->assign_int_func) = this->getOrInsertFunction("bstd_assign_int", assign_i_to_n_types);

    llvm::FunctionType *assign_double_to_n_types = llvm::FunctionType::get(void_t, { number_struct_ptr_t, double_type }, false);
    this->assign_double_func = new llvm::FunctionCallee();
    *(this->assign_double_func) = this->getOrInsertFunction("bstd_assign_double", assign_double_to_n_types);

    llvm::FunctionType *assign_cstr_to_pic_types = llvm::FunctionType::get(void_t, { this->pictureStructType, int8ptr_t }, false);
    this->assign_cstr_to_picture_func = new llvm::FunctionCallee();
    *(this->assign_cstr_to_picture_func) = this->getOrInsertFunction("bstd_assign_str", assign_cstr_to_pic_types);

    llvm::FunctionType *add_i_to_n_types = llvm::FunctionType::get(void_t, { number_struct_ptr_t, int64_t }, false);
    this->add_int_func = new llvm::FunctionCallee();
    *(this->add_int_func) = this->getOrInsertFunction("bstd_add_int", add_i_to_n_types);

    llvm::FunctionType *bstd_assign_number_types = llvm::FunctionType::get(void_t, { number_struct_ptr_t, number_struct_ptr_t }, false);
    this->assign_number_func = new llvm::FunctionCallee();
    *(this->assign_number_func) = this->getOrInsertFunction("bstd_assign_number", bstd_assign_number_types);

    llvm::FunctionType *bstd_assign_picture_types = llvm::FunctionType::get(void_t, { picture_struct_ptr_t, picture_struct_ptr_t }, false);
    this->assign_picture_func = new llvm::FunctionCallee();
    *(this->assign_picture_func) = this->getOrInsertFunction("bstd_assign_picture", bstd_assign_picture_types);

}

llvm::FunctionCallee* BCModule::getPrintf() {
    return this->printf_func;
}

llvm::StructType* BCModule::getNumberStructType() {
    return this->numberStructType;
}

llvm::StructType* BCModule::getPictureStructType() {
    return this->pictureStructType;
}

llvm::FunctionCallee* BCModule::getPictureToCStrFunc() {

    llvm::Type* int8ptr_t = llvm::IntegerType::getInt8PtrTy(this->getContext());
    llvm::FunctionType *pic_to_cstr_types = llvm::FunctionType::get(int8ptr_t, this->pictureStructType, false);

    auto result = new llvm::FunctionCallee();
    (*result) = this->getOrInsertFunction("bstd_picture_to_cstr", pic_to_cstr_types);

    return result;
}

llvm::FunctionCallee* BCModule::getAssignCStrFunc() {
    return this->assign_cstr_to_picture_func;
}

llvm::FunctionCallee* BCModule::getMarshallIntFunc() {
    return this->marshall_int_func;
}

llvm::FunctionCallee *BCModule::getMarshallDoubleFunc() {
    return this->marshall_double_func;
}

llvm::FunctionCallee *BCModule::getAssignIntFunc() {
    return this->assign_int_func;
}

llvm::FunctionCallee *BCModule::getAssignDoubleFunc() {
    return this->assign_double_func;
}

llvm::FunctionCallee *BCModule::getAddIntFunc() {
    return this->add_int_func;
}

llvm::Function* BCModule::findProcedure(const std::string& _procedure_name) {

    std::string procedure_name = std::string(_procedure_name);

    // procedure names are lower case. Lookup is case-insensitive.
    std::transform(procedure_name.begin(), procedure_name.end(), procedure_name.begin(),
                   [](unsigned char c){ return std::tolower(c); });

    if (function_shadow_symbol_table.count(procedure_name)) {
        return function_shadow_symbol_table.at(procedure_name);
    }

    return nullptr;
}

DataEntry* BCModule::findDataEntry(const std::string& name) {

    if (data_entry_shadow_symbol_table.count(name)) {
        return data_entry_shadow_symbol_table.at(name);
    }

    return nullptr;
}

std::map<std::string, DataEntry*> BCModule::getDataSymbolTable() {
    return this->data_entry_shadow_symbol_table;
}
