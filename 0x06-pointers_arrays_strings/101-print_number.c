#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	int m;
	int o;
	unsigned int z;

	o = 10;

	if (n < 10 && n >= 0)
	{
		_putchar(n);
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		z = n;
	}
	while (z/o > 9)
	{
		o = o * 10;
	}
	while (o > 0)
	{
		m = z / o;
		z = z % o;
		_putchar(m + '0');
		o = o / 10;
	}
}
