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
	unsigned long i = 1 << 14;
	int found_one = 0;
	int c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (!n)
	{
		return;
	}

	for (c = 0; c <= 14; ++c)
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
