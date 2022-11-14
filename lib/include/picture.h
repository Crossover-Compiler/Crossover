//
// Created by manta on 11/10/22.
//

#ifndef CROSSOVER_PICTURE_H
#define CROSSOVER_PICTURE_H

#include <cinttypes>

namespace bstd {

    typedef struct Picture {
        char *bytes;
        char *mask;
        uint8_t length;
    } Picture;
}

#endif //CROSSOVER_PICTURE_H
