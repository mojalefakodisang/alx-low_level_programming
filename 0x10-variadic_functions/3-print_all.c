#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints all specifiers corresponding format
 * 
 * @format: string to be printed
 * 
 * Return: no return value
*/
void print_all(const int * const format, ...)
{
    va_list args;
    va_start(args, format);

    char c;
    int i;
    float f;
    char *s;
    int separator;
    char *str;

    separator = 0;
    str = format;
    while (*str != '\0')
    {
        if (*str == 'c')
        {
            c = va_arg(args, int);
            printf("%c", c);
            separator = 1;
        }
        else if (*str == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
            separator = 1;
        }
        else if (*str == 'f')
        {
            f = va_arg(args, double);
            printf("%f", f);
            separator = 1;
        }
        else if (*str == 's')
        {
            s = va_arg(args, char *);
            printf("%s", s);
            separator = 1;
        }
        str++;
    }
    va_end(args);
    printf("\n");
}
