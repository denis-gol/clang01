//
// Created by admin on 01.10.2026.
//


#include "functions.h"

char* cl01_strcpy(char *restrict dst, const char *restrict src)
{
    char* old = dst;
    while (1) {
        *dst = *src;
        if (*src=='\0') break;
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
size_t cl01_strlen(const char* str)
{
    size_t len = 0;
    while (*str++!='\0') {
        ++len;
    }
    return len;

    // решение лучше!
//    const char* old = str;
//    while(*str) ++str;
//    return str - old;
}

//const char *str = "123456789";
//const char *append2 = "RTOS";
//char buf[50] = {0};
//cl01_strcpy(buf, str); // копируем
//cl01_strcat(buf, append2); // и только потом клеим. Наслаждаемся Си...
//printf("buf: %s\n", buf);
//printf("&buf: %p\n", buf);
//printf("---\n");
char* cl01_strcat(char* restrict dst, const char* restrict src)
{
    char * start = dst;
    while(*dst)
        ++dst;
    while((*dst++ = *src++));

    return start;
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
void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
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






