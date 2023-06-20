#include <stdio.h>
/**
 * main - prints alphabets from a to z
 *
 * Return: always returns 0 on success
 */

int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
