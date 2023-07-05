#include "main.h"

/**
 * _puts_recursion - Prints character s
 * @s: The string to be printed
 * Return: Returns string s recursively
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		return;
	}
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	_puts_recursion(s + i);
}
