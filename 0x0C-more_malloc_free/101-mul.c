#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiplies two integers
 *
 * @num1: first number
 * @num2: second number
 *
 * Return: returns the product of the two numbers
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isPos - checks if the string is positive and also is a digit
 *
 * @s: string to be checked
 *
 * Return: returns 1 on success, else 0
 */
int isPos(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - calculates the product between two integers
 *
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int *num1, *num2, len1, len2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isPos(argv[1]) || !isPos(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	len1 = atoi(argv[1]);
	num1 = (int *)malloc(sizeof(int));
	*num1 = len1;

	len2 = atoi(argv[2]);
	num2 = (int *)malloc(sizeof(int));
	*num2 = len2;

	result = multiply(*num1, *num2);
	printf("%d\n", result);

	free(num1);
	free(num2);

	return (0);

}
