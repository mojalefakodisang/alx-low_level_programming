#include "main.h"

/**
 * print_triangle - function prints '#' character
 * @size: size of the value
 * Return: No value returned
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (x = 0; x < size; x++)
	{
		for (y = size - x - 1; y > 0; y--)
		{
			_putchar(' ');
		}
		for (z = 0; z <= x; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

