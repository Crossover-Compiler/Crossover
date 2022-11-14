//
// Created by manta on 11/10/22.
//

#include "../include/picutils.h"
#include <string>

bstd::Picture* bstd::picutils::of(char* bytes, char* mask, uint8_t length) {
    char* b = new char[length];
    char* m = new char[length];
    return new Picture {
      .bytes = std::copy(bytes, bytes + length, b),
      .mask = std::copy(mask, mask + length, m),
      .length = length
    };
}


bstd::Picture* bstd::picutils::assign(Picture* asignee, Picture* target) {
    // todo: implement
    return nullptr;
}

char* bstd::picutils::to_cstr(Picture* picture) {
    char* str = new char[picture->length + 1];
    str[picture->length] = '\0'; // null terminator
    for (int i = 0; i < picture->length; ++i) {
        char c = mask_char(picture->bytes[i], picture->mask[i]);
        str[i] = c;
    }
    return str;
}

char bstd::picutils::mask_char(char c, char mask) {
    switch (mask) {
        case 'x':
        case 'X':
            return c;
        case '9':
            return std::to_string(c).back();
        default:
            // todo: warn of unknown mask
            return c;
    }
}
