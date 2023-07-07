#include <stdio.h>

/**
 * main - prints the name of the executable file
 *
 * @argc: Number of arguments passed on the program file
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
