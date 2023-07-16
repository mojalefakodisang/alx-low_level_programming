#include "main.h"
#include <stdio.h>

/**
 * _atoi - Prints integers within a string of characters
 * @s: String to be tested
 * Return: Return 0 on success
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
		{
			return (0);
		}
		i++;
	}
	result *= sign;
	return (result);
}
