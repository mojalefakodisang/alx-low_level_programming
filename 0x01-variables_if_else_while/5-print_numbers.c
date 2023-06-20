#include <stdio.h>
/**
 * main - Entry point. Prints single digit numbers of base 10
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
	return (0);
}
