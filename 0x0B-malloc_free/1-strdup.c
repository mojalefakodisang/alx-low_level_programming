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
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	c = (char *)malloc((sizeof(char) * len) + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		c[i] = str[i];
	}
	c[len] = '\0';

	return (c);
}
