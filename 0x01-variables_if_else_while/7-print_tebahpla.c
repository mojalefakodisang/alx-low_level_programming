#include <stdio.h>
#include <string.h>
/**
 * main - Entry point. Prints lowercase alphabets in reverse
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
