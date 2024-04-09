#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * using a binary search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to be searched
 *
 * Return: the index of the element searched, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;
	int mid_value;

	if (!array)
		return (-1);

	i = low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		mid_value = array[mid];
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		if (mid_value < value)
		{
			low = mid + 1;
		}
		else if (mid_value > value)
		{
			high = mid - 1;
		}
		else
			return (mid);
	}

	return (-1);
}
