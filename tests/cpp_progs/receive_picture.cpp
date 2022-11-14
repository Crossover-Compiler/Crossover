//
// Created by bruh on 10/18/22.
//

#include "../../lib/include/picture.h"
#include "../../lib/include/picutils.h"
#include "iostream"

extern "C" {
    void printPicture(bstd::Picture*);
}

void printPicture(bstd::Picture* picture) {
    std::cout << bstd::picutils::to_cstr(picture) << std::endl;
}
