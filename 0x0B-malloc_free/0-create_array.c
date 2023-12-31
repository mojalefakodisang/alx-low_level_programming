#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 *
 * @size: size of the array
 *
 * @c: character to be printed
 *
 * Return: returns pointer to the array else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
