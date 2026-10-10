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

// принять строку. вернуть строку, повторенную N раз
// хех, написал с первого раза.
char *repeat_str(size_t count, const char *src)
{
    size_t len = strlen(src);
    // allocate a string on the heap
    char *res = calloc(len * count + 1, sizeof(char));
    char *start = res;

    while(count--) {
        res = strcat(res, src);
    }

    return start;
}


//solution must allocate all required memory
//and return a free-able buffer to the caller.
char *disemvowel(const char *str)
{
    // Vowel list. For O(1) search
    const char *pattern = "aeiouAEIOU";

    const char *strp = str;

    // pass#1. counting vowels
    size_t counter = 0;
    while(*strp) {
        if (!strchr(pattern, *strp)) ++counter;
        ++strp;
    }

    // allocate exact size of memory (+1 for NT)
    char *res = malloc(counter + 1);
    char *res_start = res;

    // pass#2. Fill str, exclude vowels
    strp = str;
    while(*strp) {
        if (!strchr(pattern, *strp)) {
            *res = *strp;
            ++res;
        };

        ++strp;
    }
    *res = '\0';

    return res_start;
}

// write to jaden_case and return it
//    char *str = "asdf qwer";
//    char jaden_case[] = "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff";
//    char *res = to_jaden_case (jaden_case, str);
char *to_jaden_case (char *jaden_case, const char *string)
{
    int flag = 1; // need capitalize next letter. Set to 1 because we're at begin of string
    char *jaden_ptr = jaden_case;

    while (*string){
        char letter = *string;
        if (flag) {
            letter = toupper(letter);
            flag = 0;
        }
        *jaden_ptr = letter;

        // Cannot find declaration to go to
        if (isspace(*string)) flag = 1;

        ++jaden_ptr;
        ++string;
    }
    *jaden_ptr = '\0';

    return jaden_case;
}

//
//descendingOrder(0)
//descendingOrder(1021)
//descendingOrder(123456789)
int compare_desc(const void* aaa, const void* bbb)
{
    uint16_t arg1 = *(const uint8_t*)aaa;
    uint16_t arg2 = *(const uint8_t*)bbb;

    // -1/+1 - here is descending order. Twist signs if you need to get ascending order
    if (arg1 < arg2) return 1;
    else if (arg1 > arg2) return -1;
    else return 0;
}

uint64_t descendingOrder(uint64_t n)
{
    uint8_t data[20];
    size_t counter = 0;

    do {
        uint16_t result = n%10;
        n /= 10;
        data[counter++] = result;
    } while(n);

    qsort(data, counter, sizeof(uint16_t), compare_desc);

    uint64_t accum = 0;
    for(size_t i = 0; i<counter; ++i) {
        accum *= 10;
        accum += data[i];
    }
    return accum;
}










