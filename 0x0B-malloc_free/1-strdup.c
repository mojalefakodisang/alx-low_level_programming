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
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	c = (char *)malloc((len + 1) * sizeof(c));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
