//
// Created by manzi on 6/19/23.
//

#include "../../include/model/PictureField.h"
#include "../../include/ir/BCBuilder.h"
#include <bstd/picutils.h>

llvm::Value* PictureField::codegen(BCBuilder *builder, BCModule *bcModule, bool global) {

    char *m = new char [this->cardinality];
    std::strcpy (m, this->mask.c_str());

    auto *bytes = new unsigned char[this->cardinality];

    uint8_t length = this->cardinality;

    auto picture = new bstd_picture {
            .bytes = bytes,
            .mask = m,
            .length = length
    };

    bstd_picture_init(picture);

    auto v = builder->CreatePicture(picture, name, global);

    this->setValue(v);

    return v;
}

llvm::Type* PictureField::getType(llvm::LLVMContext &context) {
    return llvm::IntegerType::getInt8PtrTy(context);
}
