#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses contents of array a
 * @a: Input array of integers
 * @n: Number of elements in the array
 * Return: No return value
 */
void reverse_array(int *a, int n)
{
	int x, y, temp;

	x = 0;
	y = n - 1;
	while (x < n / 2)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
