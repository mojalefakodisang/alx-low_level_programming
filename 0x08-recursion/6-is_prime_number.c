#include "main.h"
#include <stdio.h>

/**
 * check - Checks if n is an integer
 * @n: Integer to be checked
 * @x: Divisor
 * Return: Returns 1 on success or else 0
 */
int check(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}

	if (n % x == 0)
	{
		return (0);
	}
	return (check(n, x - 1));
}
/**
 * is_prime_number - Check if an integer is a prime number
 * @n: Integer to be checked
 * Return: Returns 0 on unsuccess, else returns check recursion function
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check(n, n - 1));
}
