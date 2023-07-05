#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Prints base to the power of its exponent
 * @x: Base
 * @y: Exponent
 * Return: Returns -1 if y is negative, 1 if y = 0, else x exponent y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
