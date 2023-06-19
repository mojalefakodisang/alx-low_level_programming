#include <stdio.h>
/**
 * main: Entry poin of the program
 *
 * return - always 0
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
