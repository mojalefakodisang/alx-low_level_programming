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
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", (i * j));

	return (0);
}
