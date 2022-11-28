//
// Created by bruh on 11/28/22.
//
#include <valarray>
#include "../include/numutils.h"

[[maybe_unused]] void assign(bstd::Number* number, int value) {
    bool positive = value >= 0;

    int mag = (int)std::pow(10, number->length);
    int mask = ((int)value / mag) * mag;
    int cropped_value = std::abs(value) - mask;

    number->positive = positive;
    number->value = cropped_value;
}

[[maybe_unused]] void assign(bstd::Number* number, double value) {
    bool positive = value >= 0;

    double mag1 = std::pow(10, number->length);
    double mag2 = std::pow(10, number->length - 1);
    int shift = (int)(value * mag2);
    int mask = (int)((double)shift / mag1) * mag1;
    int cropped_value = std::abs(shift - mask);

    number->positive = positive;
    number->value = cropped_value;
}
