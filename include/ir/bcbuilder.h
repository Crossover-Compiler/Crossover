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

class BCBuilder : public llvm::IRBuilder<> {

protected:
    BCModule* module;

public:
    BCBuilder(BCModule* module, llvm::BasicBlock* bb) : llvm::IRBuilder<>(bb), module(module) {};

    /**
     * todo: doc
     * @param number
     * @return
     */
    llvm::Value* CreateNumber(BabyCobolParser::IntLiteralContext* context);

    /**
     * todo: doc
     * @param number
     * @return
     */
    llvm::Value* CreateNumber(BabyCobolParser::DoubleLiteralContext* context);

    /**
     * todo: doc
     * @param number
     * @return
     */
    llvm::Value* CreateNumber(bstd_Number* number, std::string& name, bool global = false);

    /**
     * todo: doc
     * @param picture
     * @param name
     * @param global
     * @return
     */
    llvm::Value* CreatePicture(bstd_Picture* picture, std::string &name, bool global = false);

    /**
     * todo: doc
     * @param lhs
     * @param rhs
     * @return
     */
    llvm::Value* CreateAdd(bstd_Number* lhs, bstd_Number* rhs);

    /**
     * todo: doc
     * @param n
     * @return 32-bit constant LLVM value representing the specified integer n.
     */
    llvm::Constant* asConstant(int n);

    int LiteralCount = 0;
};

#endif //CROSSOVER_BCBUILDER_H
