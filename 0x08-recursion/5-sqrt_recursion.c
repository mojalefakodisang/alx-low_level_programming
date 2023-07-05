#include "main.h"
#include <stdio.h>

/**
 * check_int - Checks int b is natural number
 * @a: factor that checks if b is natural
 * @b: Value to be checked if it is natural or not
 * Return: Returns value of a if a squared is b and -1 if it is greater than b
 */
int check_int(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return (check_int(a + 1, b));
}

/**
 * _sqrt_recursion - Prints a square root of a number n
 * @n: NUmber to be tested
 * Return: Returns 0 if n = 0, else returns check_int function
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check_int(1, n));
}
