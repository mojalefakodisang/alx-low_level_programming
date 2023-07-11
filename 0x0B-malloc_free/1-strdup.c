#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @str: string to be counted
 *
 * Return: returns i
 */
int _strlen(const char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);
	c = (char *)malloc((sizeof(c) * len) + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		c[i] = str[i];
	}

	return (c);
}
