#include <stdio.h>
/**
 * main - Entry point. Prints all alphabets except e and q
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
