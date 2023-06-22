#include "main.h"

/**
 * print_square - Prints character '#' for each value of size
 * @size: Value to be squared
 * Return: No value returned
 */
void print_square(int size)
{
	int a, x;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
