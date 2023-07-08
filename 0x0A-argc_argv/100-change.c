#include <stdio.h>
#include <stdlib.h>

/**
 * main - Counts number of coins
 *
 * @argc: Number of arguments passed
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int cents[5] = {25, 10, 5, 2, 1};
	int coinCount;

	coinCount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coinCount += num / cents[i];
		num %= cents[i];
	}
	printf("%d\n", coinCount);
	return (0);
}
