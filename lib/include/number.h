//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_NUMBER_H
#define CROSSOVER_NUMBER_H

#include <cstdint>
#include <cstdlib>

typedef struct Number {

    uint64_t value;
    uint64_t scale;
    uint8_t length;
    bool isSigned = false;
    bool positive = true;

    [[nodiscard]] int getSignedValue() const {
        return positive ? value : (-1 * (int)value);
    }

} Number;

#endif //CROSSOVER_NUMBER_H
