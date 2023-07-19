#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - calculates two integers
 *
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: returns the results of the calculations
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}
