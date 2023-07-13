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
	unsigned int len;
	char *ptr;

	len = 0;
	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	len = strlen(s1) + n;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
