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
