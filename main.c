#
#
#
#include <stdio.h>
#include <string.h>

#include <stddef.h>
#include <stdint.h>
#include <inttypes.h> // for: printf("%"PRIu8"%s"...


#include "functions.h" // пишем аналог функций Си (а что под капотом делается?)
#include "codewars.h"  // задачки с кодварс
#include "hardware.h"  // функции из разборов с железом (битовые сдвиги, *struct итд)

#define BOOL_DEF(x) ((x)?"true":"false")
#define ARR_LEN(arr) (sizeof(arr)/sizeof*(arr))

static void print_array (size_t length, const uint8_t array[length]);
static void print_array_as_hex(char *str);


int main(void)
{

//    printf(str);
//    printf("str: %p.",str);
//    printf("\n");

//############### пишем свою strcmp ############################################
//    const char *str = "123456789";
//    const char *append = "abcd";
//    const char *append2 = "RTOS";

//############### пишем типа под STM32 ############################################













//############### codewars.  ############################################


    return 0;
}


//###############  SERVICE FUNCTIONS  ###################################

static void print_array (size_t length, const uint8_t array[length])
{
    printf("{");
    for (size_t i = 0; i < length; i++)
        printf("%"PRIu8"%s", array[i], (i == length - 1) ? "" : ", ");
    printf("}");
}

static void print_array_as_hex(char *str)
{
    printf("str: ");
    while (*str) {
        printf("%02x ", (unsigned char)*str);
        ++str;
    }
    printf("%02x\n", (unsigned char)*str);
}

static void print_array_int_as_hex(int *arr, size_t count)
{
    printf("int arr: ");
    for (size_t i = 0; i<count; ++i) {
        printf("%02x ", *arr);
        ++arr;
    }
}

// ########### testing (data, expected) ##################
//     uint64_t test[][2] = {
//            {0,0},
//            {1,1},
//            {1021,2110},
//            {123456789,987654321},
//            {100,100},
//            {9223372036854775807,-8558966418276229416},
//    };
//    int test_cases = sizeof(test) / sizeof*(test);
//
//    for (int i = 0; i<test_cases; ++i) {
//
//        uint64_t num = test[i][0];
//        uint64_t exp = test[i][1];
//
//
//        uint64_t res = descendingOrder(num);
//
//        printf("num: %ld. ", num);
//        printf("exp: %ld. ", exp);
//        printf("res: %ld. ", res);
//        printf("%s\n", res==exp?"FIT":"FAIL");
//    }