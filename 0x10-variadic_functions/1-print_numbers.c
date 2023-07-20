#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in the argument followed by a separator
 *
 * @separator: character that separates the numbers
 * @n: numbers to be printed
 *
 * Return: no return value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
