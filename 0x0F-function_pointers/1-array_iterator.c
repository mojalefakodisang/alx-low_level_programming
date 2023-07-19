#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an array of numbers depending on the
 * function pointer action
 *
 * @array: array of numbers to be printed
 * @size: size of the array
 * @action: a pointer to the functio to be used
 *
 * Return: no return value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (array != NULL && action != NULL)
		{
			action(array[i]);
		}
		i++;
	}
}
