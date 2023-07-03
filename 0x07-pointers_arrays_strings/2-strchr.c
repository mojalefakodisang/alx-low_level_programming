#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: Source string
 * @c: Character to be located
 * Return: Returns s on success else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
