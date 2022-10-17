//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_NUMBER_H
#define CROSSOVER_NUMBER_H

#include <cstdint>
#include <cstdlib>

struct Number {

    uint64_t value;
    uint64_t scale;
    uint64_t length;
    uint64_t digits;
    bool isSigned = false;
    bool positive = true;

    [[nodiscard]] int getSignedValue() const {
        return positive ? value : (-1 * (int)value);
    }

};

#endif //CROSSOVER_NUMBER_H
