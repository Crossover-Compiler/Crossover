//
// Created by manta on 11/10/22.
//

#ifndef CROSSOVER_BCBUILDER_H
#define CROSSOVER_BCBUILDER_H

class BCBuilder : public llvm::IRBuilder<> {

public:

    /**
     * todo: doc
     * @param number
     * @return
     */
    Value* CreateNumber(Number* number, std::string& name);

    /**
     * todo: doc
     * @param lhs
     * @param rhs
     * @return
     */
    Value* CreateAdd(Number* lhs, Number* rhs);

};

#endif //CROSSOVER_BCBUILDER_H
