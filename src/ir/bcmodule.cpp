#include "../../../Crossover/include/ir/bcmodule.h"
#include "spdlog/spdlog.h"
#include "llvm/IR/IRBuilder.h"

void BCModule::initialize() {

    // instantiate printf function

    llvm::Type* t = llvm::Type::getInt8PtrTy(this->getContext());
    std::vector<llvm::Type*> int_types = { t };
    llvm::Type* int32_t = llvm::Type::getInt32Ty(this->getContext());
    llvm::Type* int64_t = llvm::Type::getInt64Ty(this->getContext());
    llvm::Type* int1_t = llvm::Type::getInt1Ty(this->getContext());

    llvm::FunctionType* printf_type = llvm::FunctionType::get(int32_t, int_types, true);

    this->printf_func = new llvm::FunctionCallee();

    *(this->printf_func) = this->getOrInsertFunction("printf", printf_type);

    // create number struct type
    llvm::ArrayRef<llvm::Type*> number_struct_types = {
            int64_t, // value
            int64_t, // scale
            int64_t, // length
            int64_t, // digits
            int1_t,  // isSigned
            int1_t,  // positive
    };
    this->numberStructType = llvm::StructType::create(this->getContext(), number_struct_types, "Struct.Number");
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
    llvm::FunctionType* f_type = llvm::FunctionType::get(r_type, this->numberStructType, true);

    auto f = new llvm::FunctionCallee();

    *(f) = this->getOrInsertFunction("printNumber", f_type);

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
