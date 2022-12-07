#include "../../../Crossover/include/ir/bcmodule.h"
#include "spdlog/spdlog.h"
#include "llvm/IR/IRBuilder.h"

void BCModule::initialize() {

    llvm::Type* int8ptr_t = llvm::Type::getInt8PtrTy(this->getContext());

    llvm::Type* int8_t = llvm::Type::getInt8Ty(this->getContext());
    llvm::Type* int8_ptr_type = llvm::PointerType::getInt8PtrTy(this->getContext());
    llvm::Type* int32_t = llvm::Type::getInt32Ty(this->getContext());
    llvm::Type* int64_t = llvm::Type::getInt64Ty(this->getContext());
    llvm::Type* int1_t = llvm::Type::getInt1Ty(this->getContext());

    // instantiate printf function
    llvm::FunctionType* printf_type = llvm::FunctionType::get(int32_t, { int8ptr_t }, true);
    this->printf_func = new llvm::FunctionCallee();
    *(this->printf_func) = this->getOrInsertFunction("printf", printf_type);

    // create number struct type
    llvm::ArrayRef<llvm::Type*> number_struct_types = {
            int64_t, // value
            int64_t, // scale
            int8_t, // length
            int64_t, // digits
            int1_t,  // isSigned
            int1_t,  // positive
    };
    this->numberStructType = llvm::StructType::create(this->getContext(), number_struct_types, "Struct.Number");

    // picture struct types
    llvm::ArrayRef<llvm::Type*> picture_struct_types = {
            int8_ptr_type,  // bytes
            int8_ptr_type,  // mask
            int8_t,         // length
    };
    this->picture_struct_type = llvm::StructType::create(this->getContext(), picture_struct_types, "Struct.Picture");
}

llvm::FunctionCallee* BCModule::getPrintf() {
    return this->printf_func;
}

llvm::StructType* BCModule::getNumberStructType() {
    return this->numberStructType;
}

llvm::StructType* BCModule::getPictureStructType() {
    return this->picture_struct_type;
}

llvm::FunctionCallee* BCModule::getPrintNumber() {
//    printNumber(Number*)
    auto r_type = llvm::Type::getVoidTy(this->getContext());
    llvm::FunctionType* f_type = llvm::FunctionType::get(r_type, this->numberStructType, false);

    auto f = new llvm::FunctionCallee();

    *(f) = this->getOrInsertFunction("printNumber", f_type);

    return f;
}

llvm::FunctionCallee* BCModule::getPrintPicture(bstd::Picture* picture) {

    auto r_type = llvm::Type::getVoidTy(this->getContext());
    llvm::FunctionType* f_type = llvm::FunctionType::get(r_type, this->picture_struct_type, false);

    auto f = new llvm::FunctionCallee();

    *(f) = this->getOrInsertFunction("printPicture", f_type);

    return f;
}

llvm::FunctionCallee* BCModule::getPrintPicture() {

    auto r_type = llvm::Type::getVoidTy(this->getContext());
//    auto ptr_ty = llvm::PointerType::get(this->getContext(), 4);
    llvm::FunctionType* f_type = llvm::FunctionType::get(r_type, this->picture_struct_type, false);

    auto f = new llvm::FunctionCallee();

    *(f) = this->getOrInsertFunction("printPicture", f_type);

    return f;
}

llvm::FunctionCallee* BCModule::getPrintPicturePtr() {

    auto r_type = llvm::Type::getVoidTy(this->getContext());
    auto ptr_ty = llvm::PointerType::get(this->getContext(), 4);
    llvm::FunctionType* f_type = llvm::FunctionType::get(r_type, ptr_ty, false);

    auto f = new llvm::FunctionCallee();

    *(f) = this->getOrInsertFunction("printPicturePtr", f_type);

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
