#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints all specifiers
 *
 * @format: list of data types
 *
 * Return: no return value
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int I;
	float F;
	char *S;

	va_start(args, format);
	while (*format)
	{
		if (*format == 'c' || *format == 'i')
		{
			I = va_arg(args, int);
			printf("%d", I);
		}
		else if (*format == 'f')
		{
			F = va_arg(args, double);
			printf("%f", F);
		}
		else if (*format == 's')
		{
			S = va_arg(args, char *);
			if (S == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", S);
			}
		}
	}
	va_end(args);
	printf("\n");
}
