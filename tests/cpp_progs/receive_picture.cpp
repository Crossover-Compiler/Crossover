//
// Created by bruh on 10/18/22.
//

#include "../../lib/include/picutils.h"
#include "iostream"

extern "C" {
    void printPicture(bstd_Picture*);
}

void printPicture(bstd_Picture* picture) {
    std::cout << bstd_picutils_to_cstr(picture) << std::endl;
}
