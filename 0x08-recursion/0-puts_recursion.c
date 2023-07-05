#include "main.h"

/**
 * _puts_recursion - Prints character s
 * @s: The string to be printed
 * Return: Returns string s recursively
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
