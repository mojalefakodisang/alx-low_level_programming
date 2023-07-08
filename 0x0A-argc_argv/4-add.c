#include <stdlib.h>
#include <stdio.h>

/**
 * is_positive - Checks if the string passed is positive number
 * @str: string to be tested
 * Return: Returns 1 on success, else 0
 */
int is_positive(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - adds any positive arguments passed onto the program
 *
 * @argc: Number of arguments passed onto the program
 * @argv: Argument vector
 *
 * Return: 1 on unsuccess, 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;

	sum = 0;
	num = 0;
	i = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (is_positive(argv[i]))
		{
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
