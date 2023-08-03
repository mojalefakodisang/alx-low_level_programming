#include "main.h"

/**
 * print_binary - prints a binary from a decimal
 *
 * @n: decimal to be converted to binary
 *
 * Return: no return value
 */
void print_binary(unsigned long int n)
{
	unsigned long i;
	int found_one = 0;

	i = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (!n)
	{
		return;
	}

	while (i > 0)
	{
		if (n & i)
		{
			_putchar('1');
			found_one = 1;
		}
		else if (found_one)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}
