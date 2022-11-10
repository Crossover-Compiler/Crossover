//
// Created by manta on 11/10/22.
//

#ifndef CROSSOVER_PICUTILS_H
#define CROSSOVER_PICUTILS_H

namespace bstd {

    /**
     * todo: doc. Make sure it copies the arrays!
     * @param bytes
     * @param mask
     * @param length
     * @return
     */
    Picture* of(char* bytes, char* mask, uint8_t length);

    /**
     * todo: doc. assigns picture to another
     * @param asignee
     * @param target
     * @return
     */
    Picture* assign(Picture* asignee, Picture* target);

    /**
     * todo: doc
     * @param picture
     * @return
     */
    char* to_cstr(Picture* picture);

    /**
     * todo: doc
     * @param c
     * @param mask
     * @return
     */
    char mask_char(char c, char mask);

}

#endif //CROSSOVER_PICUTILS_H
