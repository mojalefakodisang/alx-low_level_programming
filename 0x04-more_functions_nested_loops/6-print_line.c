#include "main.h"

/**
 * print_line - prints lines from variable n
 * @n: Maximum number of character '_'
 * Return: No return value
 */
void print_line(int n)
{
	char m;
	int o;

	m = '_';
	for (o = 0; o <= n; o++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
