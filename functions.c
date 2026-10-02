//
// Created by admin on 01.10.2026.
//

void cl01_strcpy (char *dst, const char *src ) {
//    while(*src != '\0') {
//        *dst = *src;
//        ++src;
//        ++dst;
//    }
    while(1) {
        *dst = *src;
        ++src;
        ++dst;
        if (*src != '\0') break;
    }
};
