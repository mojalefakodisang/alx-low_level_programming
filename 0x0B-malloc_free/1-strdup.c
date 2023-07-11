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
int _strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *_strdup(char *str)
{
	char *c;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	c = malloc(sizeof(c) * _strlen(str));
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
