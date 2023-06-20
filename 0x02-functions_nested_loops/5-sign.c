#include "main.h"

/**
 * print_sign - prints sign of a given number @n
 * @n: Any given number to be tested and prints '-' or '+' or '0'
 *
 * Return: Returns 1 on success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}
