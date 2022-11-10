//
// Created by bruh on 10/17/22.
//

#include "include/arithmetic.h"
#include <algorithm>
#include <math.h>

Number bstd::add(Number *lhs, Number *rhs) {
    uint64_t s = std::max(lhs->scale, rhs->scale);
    int a = lhs->getSignedValue() * (int)std::pow(10, (-lhs->scale) + s);
    int b = rhs->getSignedValue() * (int)std::pow(10, (-rhs->scale) + s);
    int result = a + b;
    return Number({
        .value = (uint64_t)std::abs(result),
        .scale = s,
        .positive = result >= 0,
    });
}
