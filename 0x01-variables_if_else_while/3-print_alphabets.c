#include <stdio.h>

/**
 * main - Prints lower and upper case alphabets in ascending order.
 *
 * Return: Returns 0 on success.
 */
int main(void)
{
	char l;
	char u;

	l = 'a';
	u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}

	putchar('\n');
	return (0);
}
