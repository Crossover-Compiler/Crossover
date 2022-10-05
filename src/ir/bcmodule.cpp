#include "../../../Crossover/include/ir/bcmodule.h"
#include "spdlog/spdlog.h"
#include "llvm/IR/IRBuilder.h"

void BCModule::initialize() {

    // instantiate printf function

    llvm::Type* t = llvm::Type::getInt8PtrTy(this->getContext());
    std::vector<llvm::Type*> int_types = { t };
    llvm::Type* vt = llvm::Type::getInt32Ty(this->getContext());

    llvm::FunctionType* printf_type = llvm::FunctionType::get(vt, int_types, true);

    this->printf_func = new llvm::FunctionCallee();

    *(this->printf_func) = this->getOrInsertFunction("printf", printf_type);


    // Testing external function TODO: remove

    // progsays
    llvm::Type* void_t = llvm::Type::getVoidTy(this->getContext());
    llvm::FunctionType* prog_says_types = llvm::FunctionType::get(void_t, int_types, true);
    this->prog_says_func = new llvm::FunctionCallee();
    *(this->prog_says_func) = this->getOrInsertFunction("prog_says", prog_says_types);

    // fib
    llvm::FunctionType* fib_types = llvm::FunctionType::get(void_t, true);
    this->fib_func = new llvm::FunctionCallee();
    *(this->fib_func) = this->getOrInsertFunction("fib", fib_types);

    //structptr
    llvm::ArrayRef<llvm::Type*> aref_struct = {vt, vt};
    llvm::Type* struct_t = llvm::StructType::create(this->getContext(), aref_struct,"Struct.A");
    this->struct_func = new llvm::FunctionCallee();
    *(this->struct_func) = this->getOrInsertFunction("m1", struct_t);

}

llvm::FunctionCallee* BCModule::getPrintf() {
    return this->printf_func;
}

llvm::FunctionCallee* BCModule::getProgSays() {
    return this->prog_says_func;
}

llvm::FunctionCallee* BCModule::getFib() {
    return this->fib_func;
}


llvm::FunctionCallee* BCModule::getStructFunc() {
    return this->struct_func;
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
