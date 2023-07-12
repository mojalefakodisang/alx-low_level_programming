#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - prints every argument onto a program into a newline
 *
 * @ac: number of arguments
 *
 * @av: argument vector
 *
 * Return: returns a pointer to the argument vector
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	len += ac + 1;

	result = (char *)malloc(sizeof(char) * len);

	if (result == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[len] = av[i][j];
			len++;
		}
		result[len] = '\n';
		len++;
	}
	result[len] = '\0';

	return (result);
}
