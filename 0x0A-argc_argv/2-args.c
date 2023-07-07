#include <stdio.h>

/**
 * main - Prints every arguments passed to the program in a new line
 *
 * @argc: Number of arguments passed
 *
 * @argv: Argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
