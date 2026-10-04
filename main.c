#
#
#
#include <stdio.h>
#include <string.h>

#include <stddef.h>

#include "functions.h"
#include "codewars.h"

#define BOOL_DEF(x) ((x)?"true":"false")



int main(void)
{

//    printf(str);
//    printf("str: %p.",str);
//    printf("\n");

//############### пишем свою strlen ############################################
    char str[10] = {"123456789\0"};
//    char str[10] = {"\0"};
//    char str[10] = {"A\0"};
    size_t length;

    length = strlen(str);
    printf("input: %s\n", str);
    printf("size:  %zu\n", length);
    printf("\n");

    length = cl01_strlen(str);
    printf("input: %s\n", str);
    printf("size:  %zu\n", length);



//############### разбираем sprintf ############################################
//    char message[50]; // Буфер на 50 символов
//    int id = 7;
//    int speed = 200;
//
//    // Собираем строку внутри массива message
//    sprintf(message, "Шаг: %d, Скорость измерения: %d мс.", id, speed);
//
//    // Теперь в message лежит строка: "Шаг: 7, Скорость измерения: 200 мс."
//    printf("%s\n", message);


//############### codewars.  ############################################


    return 0;
}


