#include <stdio.h>
/**
 * main - Entry point. Prints all single digit numbers of base 10
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
