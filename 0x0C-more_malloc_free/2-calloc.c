#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements
 * @size: size of the data type
 *
 * Return: returns pointer to array, else returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *num;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	num = malloc(sizeof(unsigned int) * (size * nmemb));
	if (!num)
	{
		return (NULL);
	}
	return (num);
}
