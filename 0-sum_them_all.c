#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds arguments depending on number of arguments
 *
 * @n: Arguments passed into the function
 *
 * Return: returns result, else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	result = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, unsigned int);
	}

	va_end(args);
	return (result);
}
