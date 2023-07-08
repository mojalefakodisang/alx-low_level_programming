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
		return (0);
	}
	
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
