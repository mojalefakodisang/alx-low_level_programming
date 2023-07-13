#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: number of elements of the second string
 *
 * Return: returns pointer to the strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	unsigned int len1, len2, len;
	char *ptr;

	len1 = len2 = len = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; s2[i] != '\0'; j++)
	{
		len2++;
	}

	len = len1 + len2;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		if (len2 < n)
		{
			for (k = 0; s2[k] != '\0'; k++)
			{
				ptr[i] = s2[j];
				i++;
			}
		}
		else
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	ptr[len] = '\0';
	return (ptr);
}
