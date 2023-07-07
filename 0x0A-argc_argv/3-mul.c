#include <stdlib.h>
#include <stdio.h>
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
			mul *= atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (mul);
}
