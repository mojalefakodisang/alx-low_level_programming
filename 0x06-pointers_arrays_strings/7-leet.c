#include "main.h"
#include <stdio.h>

/**
 * leet - Converts certain letters to numbers
 * @s: String to be converted
 * Return: Returns the string
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtT1L";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
