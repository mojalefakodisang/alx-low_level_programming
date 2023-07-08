#include <stdlib.h>
#include <stdio.h>
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
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num > 0)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
