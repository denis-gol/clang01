//
// Created by admin on 02.10.2026.
//

#ifndef CLANG01_CODEWARS_H
#define CLANG01_CODEWARS_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include <inttypes.h> // uint8_t



size_t count_sheep(const bool sheep[/* count */], size_t count);

bool lovefunc(int flower1, int flower2);

bool better_than_average(const int class_points[/* class_size */], int class_size, int your_points);

// камень-ножницы-бумага
enum tool {ROCK, PAPER, SCISSORS, TOOL_COUNT};
enum outcome {P1_WON, P2_WON, DRAW, OUTCOME_COUNT};
enum outcome rps(enum tool p1, enum tool p2);
//// хитро подменим енумы на текст
#define enum_str(enum_member) [enum_member] = #enum_member
extern const char *const tool_names[];
extern const char *const outcomes_names[];

// вернуть "Even/Odd"
const char* even_or_odd(int number);

int sum_array(const int values[/* count */], size_t count);

void digitize(uint64_t n, uint8_t digits[], size_t *length_out);

char *repeat_str(size_t count, const char *src);

char *disemvowel(const char *str);

char *to_jaden_case (char *jaden_case, const char *string);

int compare_desc(const void* aaa, const void* bbb);
uint64_t descendingOrder(uint64_t n);

char *dna_strand(const char *dna);









#endif //CLANG01_CODEWARS_H
