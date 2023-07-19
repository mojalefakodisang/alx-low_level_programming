#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that prints index if comparison is true
 *
 * @array: array to be used
 * @size: size of the array
 * @cmp: function pointer to be used
 *
 * Return: returns index if successful, else -1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0 || !cmp)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != '\0')
			{
				return (i);
			}
		}
	}
	return (0);
}
