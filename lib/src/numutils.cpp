//
// Created by bruh on 11/28/22.
//
#include <valarray>
#include "../include/numutils.h"

[[maybe_unused]] void assign(bstd::Number* number, int value) {
    bool positive = value >= 0;

    int mag = (int)std::pow(10, number->scale);
    int mask = ((int)value / mag) * mag;
    int cropped_value = std::abs(value) - mask;

    number->positive = positive;
    number->value = cropped_value;
}

[[maybe_unused]] void assign(bstd::Number* number, double value) {
    bool positive = value >= 0;

    double mag = std::pow(10, number->length);
    int shift = (int)(value * mag);
    int mask = ((double)shift / mag) * mag;
    int cropped_value = std::abs(shift - mask);

    number->positive = positive;
    number->value = cropped_value;
}
