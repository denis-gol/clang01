//
// Created by admin on 01.10.2026.
//


#include "functions.h"

char* cl01_strcpy (char *restrict dst, const char *restrict src) {

    char *old = dst;
    while(1) {
        *dst = *src;
        if (*src == '\0') break;
        ++src;
        ++dst;
    }
    // решение лучше!
    //while ((*dst++ = *src++));

    return old;
}

//    char str[10] = {"123456789\0"};
//    size_t length;
//    length = cl01_strlen(str);
//    printf("input: %s\n", str);
//    printf("size:  %zu\n", length);
size_t cl01_strlen(const char* str) {
    size_t len = 0;
    while(*str++ != '\0') {
        ++len;
    }
    return len;

    // решение лучше!
//    const char* old = str;
//    while(*str) ++str;
//    return str - old;
}
