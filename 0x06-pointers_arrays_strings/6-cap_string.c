#include "main.h"
#include <stdio.h>

/**
 * cap_string - Function that capitalize the first letter of each word
 * @str: Source string
 * Return: Returns a converted string
 */
char *cap_string(char *str)
{
	int n;
	int i;

	n = 1;
	if (*str == '\0')
	{
		return (str);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			n = 1;
		}
		else if (n)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
			n = 0;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		}
	}
	return (str);
}
