#include "main.h"
#include <stdio.h>

/**
 * cap_string - Function that capitalize the first letter of each word
 * @str: Source string
 * Return: Returns a converted string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char special[];

	special[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	if (*str == '\0')
	{
		return (str);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			s[i] -= 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i] == special[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
