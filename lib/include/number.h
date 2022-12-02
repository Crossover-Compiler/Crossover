//
// Created by bruh on 10/17/22.
//

#ifndef CROSSOVER_NUMBER_H
#define CROSSOVER_NUMBER_H

#include <cstdint>
#include <cstdlib>

namespace bstd {

    /**
     * length: The number of digits in the fixed point. IE:: PICTURE 999 has length 3. PICTURE 99V9 also has length 3.
     * scale: The number of digits after the decimal point. IE:: PICTURE 999 has scale 0. PICTURE 99V9 has scale 1.
     */
    typedef struct Number {

        uint64_t value;
        uint64_t scale;
        uint8_t length;
        bool isSigned = false;
        bool positive = true;

        [[nodiscard]] int getSignedValue() const {
            return positive ? value : (-1 * (int) value);
        }

    } Number;
}

#endif //CROSSOVER_NUMBER_H
