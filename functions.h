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

int sum_array(const int values[/* count */], size_t count);

void digitize (uint64_t n, uint8_t digits[], size_t *length_out);




#endif //CLANG01_FUNCTIONS_H