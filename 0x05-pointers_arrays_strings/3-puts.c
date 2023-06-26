#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a new line after a string is given
 * @str:  String to be printed
 * Return: No value returned
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
