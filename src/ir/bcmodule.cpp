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
}

llvm::FunctionCallee* BCModule::getPrintf() {
    return this->printf_func;
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

//    switch (typeHint) {
//
//        case TokenType::LITERAL_STRING:
//            return builder->CreateGlobalStringPtr(name, name);
//
//        case TokenType::LITERAL_NUMERIC:
//            initializer = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(this->getContext()),  llvm::APInt(64, 0, defaultValue < 0));
//            type = llvm::Type::getInt64Ty(this->getContext());
//            break;
//
//        case TokenType::LITERAL_BOOLEAN:
//            // fall through
//        default:
//            spdlog::error("Unsupported type hint for identifier");
//    }
//
//    v = new llvm::GlobalVariable(*this, type, false, llvm::GlobalValue::CommonLinkage, initializer, identifier, nullptr, llvm::GlobalValue::NotThreadLocal, 64, false);
//
//    if (defaultValue != 0) {
//        llvm::Constant* initAssign = llvm::ConstantInt::get(llvm::IntegerType::getInt64Ty(this->getContext()),  llvm::APInt(64, static_cast<uint64_t>(defaultValue), defaultValue < 0));// workaround for non-zero initializer todo: check if this is consistent with FPs
//        builder->CreateStore(initAssign, v);
//    }
//
//    return v;
}
