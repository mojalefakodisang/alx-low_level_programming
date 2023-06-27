#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of array
 * @a: Array to be printed
 * @n: Number of elements
 * Return: No return value
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
