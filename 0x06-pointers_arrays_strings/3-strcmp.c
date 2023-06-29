#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares string s1 and s2
 * @s1: First string
 * @s2: Second string
 * Return: Returns difference of the two indecies
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
