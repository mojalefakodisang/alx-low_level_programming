#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: Array of integers
 * @size: Size of the array
 * @value: The value to be searched
 *
 * Return: The index of @value, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value chekced array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
