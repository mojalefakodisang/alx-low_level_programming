#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int i, j;
	unsigned int len1, len2;
	char *ptr;

	i = j = 0;
	len1 = len2 = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n < len2)
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		ptr[i] = s1[i];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		ptr[i++] = s2[j++];
	}
	ptr[i] = '\0';
	return (ptr);
}
