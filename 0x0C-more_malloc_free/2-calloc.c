#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

	num = malloc(nmemb * size);
	if (!num)
	{
		return (NULL);
	}

	memset(num, 0, nmemb * size);
	return (num);
}
