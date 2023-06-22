#include "main.h"

/**
 * print_diagonal - Prints a diagonal dependent on integer n
 *
 * Return: No value returned
 */
void print_diagonal(int n)
{
	int o, m;

	for (o = 1; o <= n; o++)
	{
		for (m = 0; m < o; m++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}

}
