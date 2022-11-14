//
// Created by manta on 11/10/22.
//

#ifndef CROSSOVER_BCBUILDER_H
#define CROSSOVER_BCBUILDER_H

#include <llvm/IR/IRBuilder.h>
#include "../../lib/include/number.h"
#include "bcmodule.h"
#include "../../lib/include/picture.h"

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
    llvm::Value* CreateNumber(bstd::Number* number, std::string& name, bool global = false);

    /**
     * todo: doc
     * @param picture
     * @param name
     * @param global
     * @return
     */
    llvm::Value* CreatePicture(bstd::Picture* picture, std::string &name, bool global = false);

    /**
     * todo: doc
     * @param lhs
     * @param rhs
     * @return
     */
    llvm::Value* CreateAdd(bstd::Number* lhs, bstd::Number* rhs);

    /**
     * todo: doc
     * @param n
     * @return 32-bit constant LLVM value representing the specified integer n.
     */
    llvm::Constant* asConstant(int n);

};

#endif //CROSSOVER_BCBUILDER_H
