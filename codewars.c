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

// 8 Kyu.
// an array with your peers' test scores. Now calculate the average and compare your score!
// Return true if you're better, else false!
//    int class[] = {50,50,50};
//    int class_size = sizeof(class)/sizeof(class[0]);
//    int your_score = 50;
//    printf("better than average: %s", better_than_average(class, class_size, your_score) ? "true": "false");
bool better_than_average(const int class_points[/* class_size */], int class_size, int your_points) {
    // Your code here :)
    // Note: `class_size` is the length of `class_points`.
    float sum = 0.0;
    for(int i=0; i<class_size; ++i)
        sum += class_points[i];
    sum /= class_size;

    return your_points > sum;
}

// 8 Kyu.
// calling:
// //    enum tool p1 = PAPER;
////    enum tool p2 = ROCK;
//    enum outcome res = rps(p1, p2); // P1 WON
//    printf("p1: %s, p2: %s, battle: %s\n", tool_names[p1], tool_names[p2], outcomes_names[res]);
const char *const tool_names[] = {enum_str(PAPER), enum_str(ROCK), enum_str(SCISSORS)};
const char *const outcomes_names[] = {enum_str(P1_WON), enum_str(P2_WON), enum_str(DRAW)};
// solution
enum outcome rps(enum tool p1, enum tool p2)
{
    enum outcome matrix[TOOL_COUNT][OUTCOME_COUNT] = {
            {DRAW, P2_WON, P1_WON},
            {P1_WON, DRAW, P2_WON},
            {P2_WON, P1_WON, DRAW},
    };
    return matrix[p1][p2];
}

// 8 Kyu.
// Get argument (int), return Even/Odd.
//     int num;
//    num = 3;
//    printf("number %d is: %s\n", num, even_or_odd(num));
const char* even_or_odd(int number)
{
    return ((number%2) ? "Odd" : "Even");
}

// вывести сумму чисел массива. числа мб отрицательными
//int values[] = { 100, 200, 300, -600, 500 };
//size_t length = sizeof(values) / sizeof(values[0]);
//int res;
//res = sum_array(values,length);
//printf("res: %d", res);
int sum_array(const int values[/* count */], size_t count)
{
    int res = 0;
    while(count--) res += *values++;
    return res;
}

// передано число (uint), разобрать по цифрам, разложить в массив в обратном порядке (123=>{3,2,1})
//digits[0] = 6; // write your answer to the pre-allocated digits array
//*length_out = 1; // report the number of digits
//    uint8_t digits[20] = {0};
//    size_t length;
//    uint64_t number = 348597;
//    digitize(number, digits, &length);
//    printf("number: %ld\n", number);
//    print_array(length, digits);
//    printf("length: %zu\n", length);
void digitize(uint64_t n, uint8_t digits[], size_t *length_out)
{
    int digit;
    *length_out = 0;
    do {
        digit = n%10;
        n /= 10;
        *digits++ = digit;
        (*length_out)++;
    } while(n);
}








