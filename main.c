#
#
#
#include <stdio.h>
#include <string.h>

#include <stddef.h>
#include <stdint.h>
#include <inttypes.h> // for: printf("%"PRIu8"%s"...

#include "functions.h"
#include "codewars.h"

#define BOOL_DEF(x) ((x)?"true":"false")
#define ARR_LEN(arr) (sizeof(arr)/sizeof *(arr))

static void print_array (size_t length, const uint8_t array[length]);


int main(void)
{

//    printf(str);
//    printf("str: %p.",str);
//    printf("\n");

//############### пишем свою strcmp ############################################
//    const char *str = "123456789";
//    const char *append = "abcd";
//    const char *append = "adRTOS";
//    const char *append2 = "RTOS";
//    const char *append2 = "1234";
//    char str[10] = {"\0"};
//    char str[10] = {"A\0"};



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
