//
// Created by admin on 02.10.2026.
//

#include "codewars.h"

// Kyu 8. считаем массив с овечками
size_t count_sheep(const bool sheep[/* count */], size_t count) {

    size_t herd_size = 0;
    if (sheep == NULL || count == 0) return 0;
    for(int i=0; i<count; ++i)
        if (sheep[i]) ++herd_size;

    return herd_size;
}

// Kyu 8. про цветочки: один должен иметь четное лепестков, другой нечетное
//if (lovefunc(2,4)) {
//    printf ("they loved!");
//} else {
//    printf ("not love :'(");
//}
bool lovefunc(int flower1, int flower2) {

    // есть решение короче!
    if ((flower1 % 2 == 1) && (flower2 %2 == 0)) {
        return true;
    }
    else if ((flower1 % 2 == 0) && (flower2 %2 == 1)) {
        return true;
    }
    return false;
}




