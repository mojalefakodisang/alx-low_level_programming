#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Adds inputs of 2D square matrix
 * @a: Source array
 * @size: Length of the array
 * Return: No return value
 */
void print_diagsums(int *a, int size)
{
	int sum;
	int sum1;
	int i;

	sum = 0;
	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
