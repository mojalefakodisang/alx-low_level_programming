#include "main.h"

/**
 * print_rev - Prints string @s in reverse
 * @s: String to be reversed
 * Return: No return value
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
