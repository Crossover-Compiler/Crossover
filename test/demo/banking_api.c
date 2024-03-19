#include <bstd/numutils.h>
#include <bstd/arithmetic.h>
#include <stdbool.h>
#include <stdio.h>

bool withdraw(bstd_number* balance, bstd_number amount) {

    if (bstd_greater_than(&amount, balance)) {
        return false;
    }

    bstd_subtract(balance, &amount);

    return true;
}
