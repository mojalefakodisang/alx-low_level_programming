#include "main.h"
#include <stdio.h>

/**
 * _atoi - Prints integers within a string of characters
 * @s: String to be tested
 * Return: Return 0 on success
 */
int _atoi(char *s)
{
	int index;

	index = '0';
	while (s[index] != '\0')
	{
		if ((s[index] >= '0' && s[index] <= '9')
			|| (s[index] == '-' && s[index + 1] >= '0' && s[index + 1] <= '9'))
		{
			printf("%c", s[index]);
		}
		index++;
	}
	return (0);
}
