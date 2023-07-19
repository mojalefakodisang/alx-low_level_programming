#include <stdlib.h>
#include <stdio.h>

/**
 * opcode - print buffer that prints string in lowercase and in hex
 *
 * @s: string to be printed
 * @n: number of bytes
 *
 * Return: no return value
 */
void opcode(char *s, int n)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%.2hhx", s[i]);

		if (i < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints opcode
 *
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = atoi(argv[1]);
	opcode((char *)&main, a);

	return (0);
}
