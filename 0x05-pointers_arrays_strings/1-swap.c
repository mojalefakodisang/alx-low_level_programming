#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps values of @a and @b
 * @a: Variable 1
 * @b: Variable 2
 * Return: No values returned
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
