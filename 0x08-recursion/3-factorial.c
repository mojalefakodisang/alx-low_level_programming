#include "main.h"
#include <stdio.h>

/**
 * factorial - Prints factorials of a given integer n
 * @n: Given integer
 * Return: Returns -1 when negative, 1 when n = 0; else returns factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
