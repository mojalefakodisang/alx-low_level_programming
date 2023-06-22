#include "main.h"

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
