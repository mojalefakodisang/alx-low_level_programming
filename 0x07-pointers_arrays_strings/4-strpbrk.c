#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: Target string that is searched
 * @accept: A string that contains characters searched on string s
 * Return: Returns a pointer to the byte in *s matching one of the bytes
 * in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
