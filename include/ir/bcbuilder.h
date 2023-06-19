//
// Created by manta on 11/10/22.
//

#ifndef CROSSOVER_BCBUILDER_H
#define CROSSOVER_BCBUILDER_H

#include <llvm/IR/IRBuilder.h>
#include "../../Crossover_bstd_lib//include/number.h"
#include "bcmodule.h"
#include "../../Crossover_bstd_lib/include/picture.h"
#include "../antlr/BabyCobolParser.h"
#include <string>

class BCBuilder : public llvm::IRBuilder<> {

protected:
    BCModule* module;

public:
    BCBuilder(BCModule* module, llvm::BasicBlock* bb) : llvm::IRBuilder<>(bb), module(module) {};

    /**
     * todo: doc
     * @return
     */
    llvm::Value* CreateNumber(BabyCobolParser::IntLiteralContext* context);

    /**
     * todo: doc
     * @return
     */
    llvm::Value* CreateNumber(BabyCobolParser::DoubleLiteralContext* context);

    /**
     * todo: doc
     * @param number
     * @return
     */
    llvm::Value* CreateNumber(bstd_number* number, std::string& name, bool global = false);

    /**
     * todo: doc
     * @param picture
     * @param name
     * @param global
     * @return
     */
    llvm::Value* CreatePicture(bstd_picture* picture, std::string &name, bool global = false);

    /**
     * todo: doc
     * @param picture
     * @param name
     * @param global
     * @return
     */
    llvm::Value* CreatePicture(BabyCobolParser::StringLiteralContext* context);

    /**
     *
     * @param name
     * @param m_bytes
     * @param m_mask
     * @param m_length
     * @param global
     * @return
     */
    llvm::Value *CreatePicture(const std::string &name, unsigned char *m_bytes, char *m_mask, uint8_t m_length, bool global);

    /**
     * todo: doc
     * @param lhs
     * @param rhs
     * @return
     */
    llvm::Value* CreateAdd(bstd_number* lhs, bstd_number* rhs);

    /**
     * todo: doc
     * @param n
     * @return 32-bit constant LLVM value representing the specified integer n.
     */
    llvm::Constant* asConstant(int n);

    /**
     * todo: doc
     * @return
     */
    llvm::Value *CreateNumberValue(const std::string& name, uint64_t m_value, uint64_t m_scale, uint8_t m_length, bool m_isSigned, bool m_isPositive, bool global);

    /**
     * Creates a call to the bstd runtime library marshaller function bstd_picture_to_cstr(bstd_picture*).
     * @param picture The picture to marshall.
     * @return Returns an pointer value referencing the c-style string representation of the specified picture.
     */
    llvm::Value* CreatePictureToCStrCall(llvm::Value* picture);

    /**
     * Creates a call to the bstd runtime library assignment function bstd_assign_cstr(bstd_picture*, char*).
     * @param picture The picture to assign the specified c-style string to.
     * @param str The c-style string to assign to the specified picture.
     * @return Returns void.
     */
    llvm::Value* CreateCStrToPictureCall(llvm::Value* picture, llvm::Value* str);

    llvm::Value* CreateNumberToIntPtrCall(llvm::Value* number);

    /**
     * Creates a call to the bstd runtime library marshaller function bstd_number_to_int(Number*)
     * @param number The number to marshall
     * @return Returns a pointer value referencing the integer representation of the specified number.
     */
    llvm::Value* CreateNumberToIntCall(llvm::Value* number);

    /**
     * Creates a call to the bstd runtime library marshaller function bstd_number_to_double(Number*)
     * @param number The number to marshall
     * @return Returns a pointer value referencing the double representation of the specified number.
     */
    llvm::Value* CreateNumberToDoubleCall(llvm::Value* number);

    /**
     * Creates a call to the bstd runtime library assignment function bstd_assign_int(bstd_number*, int)
     * @param number The number to assign to
     * @param value The integer to assign to the specified number
     * @return Returns void.
     */
    void CreateAssignIntToNumber(llvm::Value* number, int value);

    /**
     * Creates a call to the bstd runtime library assignment function bstd_assign_int(bstd_number*, int)
     * @param number The number to assign to
     * @param value The integer value to assign to the specified number
     * @return Returns void.
     */
    void CreateAssignIntToNumber(llvm::Value* number, llvm::Value* value);

    /**
     * Creates a call to the bstd runtime library assignment function bstd_assign_double(bstd_number*, double)
     * @param number The number to assign to
     * @param value The double value to assign to the specified number
     * @return Returns void.
     */
    void CreateAssignDoubleToNumber(llvm::Value* number, llvm::Value* value);

    void CreateAssignCStrToPicture(llvm::Value* picture, llvm::Value* value);

    /**
     * Creates a call to the bstd runtime library assignment function bstd_add_int(bstd_number*, int)
     * @param number The number to add to
     * @param value The integer value to add to the specified number
     * @return Returns void.
     */
    void CreateAddIntToNumber(llvm::Value* number, llvm::Value* value);

    void CreateAssignNumberToNumber(llvm::Value* number_ptr, llvm::Value* value_ptr);

    void CreateAssignPictureToPicture(llvm::Value* picture_ptr, llvm::Value* value_ptr);

    llvm::Function* CreateProcedure(llvm::FunctionType*, llvm::GlobalValue::LinkageTypes, std::string&);

    int LiteralCount = 0;
};

#endif //CROSSOVER_BCBUILDER_H
