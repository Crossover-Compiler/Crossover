//
// Created by bruh on 10/18/22.
//

#include "../../lib/include/picutils.h"
#include "iostream"

extern "C" {
    void printPicture(bstd::Picture);
    void printPicturePtr(bstd::Picture*);
}

void print_cstr_no_terminator(char* str, int len) {
    for (int i = 0; i < len; ++i) {
        std::cout << str[i];
    }
}

void print_pic_content(bstd::Picture* picture) {
    std::cout << "pointer:\t" << picture << std::endl;
    std::cout << "length:\t\t" << std::to_string(picture->length) << std::endl;
    std::cout << "bytes:\t\t"; print_cstr_no_terminator(picture->bytes, picture->length); std::cout << std::endl;
    std::cout << "mask:\t\t"; print_cstr_no_terminator(picture->mask, picture->length); std::cout << std::endl;
    std::cout << "to_cstr:\t" << bstd::picutils::to_cstr(picture) << std::endl;
}

void printPicture(bstd::Picture picture) {
    std::cout << ">>----------------------------------" << std::endl;
    std::cout << "printing picture by value..." << std::endl;
    print_pic_content(&picture);
    std::cout << "----------------------------------<<" << std::endl;
}

void printPicturePtr(bstd::Picture* picture) {
    std::cout << ">>----------------------------------" << std::endl;
    std::cout << "printing picture by pointer..." << std::endl;
    print_pic_content(picture);
    std::cout << "----------------------------------<<" << std::endl;
}
