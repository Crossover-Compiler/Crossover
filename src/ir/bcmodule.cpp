#include "../../../Crossover/include/ir/bcmodule.h"
#include "spdlog/spdlog.h"
#include "llvm/IR/IRBuilder.h"

void BCModule::initialize() {

    llvm::Type* int8ptr_t = llvm::Type::getInt8PtrTy(this->getContext());

    llvm::Type* int8_t = llvm::Type::getInt8Ty(this->getContext());
    llvm::Type* int32_t = llvm::Type::getInt32Ty(this->getContext());
    llvm::Type* int64_t = llvm::Type::getInt64Ty(this->getContext());

    // create number struct type
    llvm::ArrayRef<llvm::Type*> number_struct_types = {
            int64_t,    // value
            int64_t,    // scale
            int8_t,     // length
            int8_t,     // isSigned
            int8_t,     // positive
    };
    this->numberStructType = llvm::StructType::create(this->getContext(), number_struct_types, "Struct.Number");

    // create picture struct type
    llvm::ArrayRef<llvm::Type*> picture_struct_types = {
            int8ptr_t,  // bytes
            int8ptr_t,  // mask
            int8_t,     // length
    };
    this->pictureStructType = llvm::StructType::create(this->getContext(), picture_struct_types, "Struct.Picture");

    // instantiate printf function
    llvm::FunctionType* printf_type = llvm::FunctionType::get(int32_t, { int8ptr_t }, true);
    this->printf_func = new llvm::FunctionCallee();
    *(this->printf_func) = this->getOrInsertFunction("printf", printf_type);

    llvm::FunctionType *pic_to_cstr_types = llvm::FunctionType::get(int64_t, pictureStructType, false);
    this->picture_to_cstr_func = new llvm::FunctionCallee();
    *(this->picture_to_cstr_func) = this->getOrInsertFunction("bstd_picutils_to_cstr", pic_to_cstr_types);

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

llvm::FunctionCallee* BCModule::getPictureToCStrFunc() {
    return this->picture_to_cstr_func;
}
