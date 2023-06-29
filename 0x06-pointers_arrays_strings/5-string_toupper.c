#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Converts all lowercase letters to uppercases
 * @str: String to be converted to uppercase
 * Return: Returns the converted string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
