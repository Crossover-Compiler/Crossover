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


    // Testing external function

    this->prog_says_func = new llvm::FunctionCallee();
    *(this->prog_says_func) = this->getOrInsertFunction("prog_says", printf_type);

}

llvm::FunctionCallee* BCModule::getPrintf() {
    return this->printf_func;
}

llvm::FunctionCallee* BCModule::getProgSays() {
    return this->prog_says_func;
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
