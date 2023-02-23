#include "../../../Crossover/include/ir/bcmodule.h"
#include "spdlog/spdlog.h"
#include "llvm/IR/IRBuilder.h"

void BCModule::initialize() {

    llvm::Type* int8_t = llvm::Type::getInt8Ty(this->getContext());
    llvm::Type* int8ptr_t = llvm::Type::getInt8PtrTy(this->getContext());
    llvm::Type* int32_t = llvm::Type::getInt32Ty(this->getContext());
    llvm::Type* int64_t = llvm::Type::getInt64Ty(this->getContext());
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

    llvm::Type* number_struct_ptr_t = llvm::PointerType::get(this->numberStructType, 0);

    // instantiate marshalling functions
    llvm::FunctionType *n_to_i_types = llvm::FunctionType::get(int64_t, number_struct_ptr_t, false);
    this->marshall_int_func = new llvm::FunctionCallee();
    *(this->marshall_int_func) = this->getOrInsertFunction("bstd_number_to_int", n_to_i_types);

    // instantiate assignment functions
    llvm::FunctionType *assign_i_to_n_types = llvm::FunctionType::get(void_t, { number_struct_ptr_t, int64_t }, false);
    this->assign_int_func = new llvm::FunctionCallee();
    *(this->assign_int_func) = this->getOrInsertFunction("bstd_assign_int", assign_i_to_n_types);
}

llvm::FunctionCallee* BCModule::getPrintf() {
    return this->printf_func;
}

llvm::StructType* BCModule::getNumberStructType() {
    return this->numberStructType;
}

llvm::FunctionCallee* BCModule::getPrintNumber() {
//    printNumber(Number*)
    auto r_type = llvm::Type::getVoidTy(this->getContext());
    llvm::FunctionType* f_type = llvm::FunctionType::get(r_type, this->numberStructType, false);

    auto f = new llvm::FunctionCallee();

    *(f) = this->getOrInsertFunction("printNumber", f_type);

    return f;
}

llvm::FunctionCallee* BCModule::getPrintPicture() {

    auto r_type = llvm::Type::getVoidTy(this->getContext());
    auto ptr_ty = llvm::PointerType::get(this->getContext(), 4);
    llvm::FunctionType* f_type = llvm::FunctionType::get(r_type, ptr_ty, false);

    auto f = new llvm::FunctionCallee();

    *(f) = this->getOrInsertFunction("printPicture", f_type);

    return f;
}

llvm::Value* BCModule::get(std:: string identifier, llvm::IRBuilder<>* builder, float defaultValue) {



    llvm::Value* v = this->getGlobalVariable(identifier);

    if (v) {
        // Corresponding value found
        return v;
    }

    // else, it does not exist yet
    
    llvm::Constant* initializer;
    llvm::Type* type;

    // TODO: currently just casting it to string fix later
    spdlog::warn("identifier type is assumed to be string (Pls fix me later)");
    return builder->CreateGlobalStringPtr(identifier, identifier);

}

llvm::FunctionCallee* BCModule::getMarshallIntFunc() {
    return this->marshall_int_func;
}

llvm::FunctionCallee *BCModule::getAssignIntFunc() {
    return this->assign_int_func;
}
