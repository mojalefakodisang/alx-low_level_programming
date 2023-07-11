#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - adds two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: returns pointer that adds two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j;
	int len1, len2;

	if (s1 != NULL)
	{
		len1 = 0;
		i = 0;
		while (s1[i++] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		len2 = 0;
		i = 0;
		while (s2[i] != '\0')
		{
			len2++;
		}
	}

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
