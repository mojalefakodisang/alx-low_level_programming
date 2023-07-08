#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program
 *
 * @argc: number of arguments passed
 * @argv: Argument vector
 * Return: Always 0 on success
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
