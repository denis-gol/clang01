//
// Created by admin on 01.10.2026.
//

#ifndef CLANG01_FUNCTIONS_H
#define CLANG01_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


char* cl01_strcpy (char *restrict dst, const char *restrict src);

size_t cl01_strlen(const char* str);

char* cl01_strcat(char *restrict dest, const char *restrict src );




#endif //CLANG01_FUNCTIONS_H