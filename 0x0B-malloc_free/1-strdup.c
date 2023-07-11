#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be allocated a new memory
 *
 * Return: returns pointer to str else NULL
 */
char *_strdup(char *str)
{
	char *c;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	c = (char *)malloc(sizeof(c) * sizeof(str));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
