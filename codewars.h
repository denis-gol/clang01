//
// Created by admin on 02.10.2026.
//

#ifndef CLANG01_CODEWARS_H
#define CLANG01_CODEWARS_H

#include <stdio.h>
#include <stdbool.h>

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






#endif //CLANG01_CODEWARS_H
