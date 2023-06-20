#include <stdio.h>
/**
 * main - Entry point. Prints 0 to 9 and a to f
 *
 * Return: Returns 0
 */

int main(void)
{
	char ch;

	int d;

	ch = 'a';
	d = 0;
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}

	putchar('\n');
	return (0);
}
