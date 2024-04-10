#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * using the Jump search algoritm
 *
 * @array: Array
 * @size: Size of the array
 * @value: Value to be searched
 *
 * Return: Index of the value, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, step, next;

	if (!array)
		return (-1);

	step = (size_t)sqrt(size);
	for (start = 0; start < size; start += step)
	{
		printf("Value checked array[%ld] = [%d]\n",
				start, array[start]);

		if (array[start] == value)
			return (start);

		if ((start + step < size && array[start + step] >= value) ||
		start + step >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					start, start + step);

			for (next = start; next <= start + step; next++)
			{
				if (next >= size)
					return (-1);

				printf("Value checked array[%ld] = [%d]\n",
						next, array[next]);

				if (array[next] == value)
					return (next);
			}
		}
	}
	return (-1);
}
