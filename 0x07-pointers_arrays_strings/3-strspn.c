#include "main.h"
#include <stdio.h>

/**
 * _strspn - Prints length of the prefix substring
 * @s: Source string
 * @accept: Target string containing characters to match in string *s
 * Return: Returns number of characters (x) or returns 0 on unsuccess
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, x, y;

	x = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		y = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				y = 1;
			}
		}
		if (y == 0)
		{
			return (x);
		}
	}
	return (0);
}
