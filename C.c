#include "Crossover_bstd_lib/include/numutils.h"   //**************//
#include "Crossover_bstd_lib/include/picutils.h"   // BSTD imports //
#include "Crossover_bstd_lib/include/arithmetic.h" //**************//

#include "BBCBLAPI.h"                              // Generated structs from BabyCobol source

#include <string.h>                                // C string header

void increaseDate(DATE_t *date, bstd_number increaseBy) {
    bstd_add(date->DAY, &increaseBy);

    while (bstd_number_to_int(date->DAY) > 15) {
        bstd_subtract_int(date->DAY, 15);

        const char* season_str = bstd_picture_to_cstr(date->SEASON);
        char* next_season;
        if (strcmp(season_str, "SUMMER") == 0) {
            next_season = "AUTUMN";
        } else if (strcmp(season_str, "AUTUMN") == 0) {
            next_season = "WINTER";
        } else if (strcmp(season_str, "WINTER") == 0) {
            next_season = "SPRING";
        } else {
            next_season = "SUMMER";
            bstd_add_int(date->YEAR, 1);
        }
        bstd_assign_str(date->SEASON, next_season);
    }
}