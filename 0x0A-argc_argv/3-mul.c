#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts characters into integers
 *
 * @s: string to be converted
 *
 * Return: Returns result on success, else 0
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i = 1;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	result *= sign;
	return (result);
}

/**
 * main - Multiplies arguments passed onto the program
 *
 * @argc: Number of arguments passed on the program
 *
 * @argv: Argument vector
 *
 * Return: Returns variable mul on success, 1 when theres no argument, else 1
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= _atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (mul);
}
