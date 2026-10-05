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

// const char *append = "adRTOS";
// const char *append2 = "1234";
//printf("res: %d\n", cl_strcmp(append, append2));
int cl_strcmp(const char* lhs, const char* rhs)
{
    // работает, но не аналог strcmp
    while (1) {
        if (*lhs=='\0' && *rhs=='\0') return 0;
        else if (*lhs<*rhs) return -1;
        else if (*lhs>*rhs) return 1;
        ++lhs;
        ++rhs;
    }
    // решение лучше (так сделано в libc)
//    while(1) {
//        unsigned char ptr1 = *lhs++;
//        unsigned char ptr2 = *rhs++;
//        int diff = ptr1 - ptr2;
//        if (diff || ptr1 == '\0') return diff;
//    };
}

// ИИшка внезапно подбросила задачку на закрепление материала.
// Надо с помощью snprintf склеить src1 и src2 внутри dst, строго контролируя, чтобы ничего не взорвалось.
// вернуть 1, если всё поместилось, или 0, если строки пришлось обрезать.
//    char buf[10];
//    int buf_size = sizeof(buf);
//    const char str1[] = "a";
//    const char str2[] = "SqqqqWddE";
//    int res;
//    res = safe_concat(buf, buf_size, str1, str2);
//    printf("buf: %s\n", buf);
//    printf("res: %d\n", res);
//    printf("res: %s\n", res?"fit":"trimmed");
size_t safe_concat(char *dst, size_t dst_size, const char *src1, const char *src2)
{
    // мое решение
    int written = snprintf(dst, dst_size, "%s", src1);
    if (written < 0) return 0;
    if (written < dst_size) {
        dst += written;
        dst_size -= written;
    } else {
        return 0;
    }
    written = snprintf(dst, dst_size, "%s", src2);
    if (written < 0) return 0;
    return (size_t)written < dst_size;

    // решение лучше (от ИИ-шки)
//    int written = snprintf(dst, dst_size, "%s%s", src1, src2);
//    if (written < 0 || (size_t)written >= dst_size) return 0;
//    return 1;
}








