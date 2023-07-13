#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - allocates memory to a range of an array
 *
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the range of an array
 */
int *array_range(int min, int max)
{
	int *numb;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		size = max - min + 1;
		numb = malloc(sizeof(int) * size);
		for (i = 0; i < size; i++)
		{
			numb[i] = min + i;
		}
	}
	return (numb);
}
