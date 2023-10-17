#include <bstd/numutils.h>
#include <bool.h>

bool withdraw(bstd_number* balance, bstd_number* amount) {

    if (bstd_greater_than(withdraw, balance)) {
        return false;
    }

    bstd_subtract(balance, amount);

    return true;
}
