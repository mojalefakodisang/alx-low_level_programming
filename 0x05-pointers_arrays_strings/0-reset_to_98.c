#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Reset value of n to 98
 * @n: Variable to be manipulated
 * Return: No return value
 */
void reset_to_98(int *n)
{
	int **p;

	p = &n;
	**p = 98;
}
