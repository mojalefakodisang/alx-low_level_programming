#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints last digit of any given number r
 * @r: Any given number
 *
 * Return: Returns last digit of any number on success
 */
int print_last_digit(int r)
{
	int last;

	last = r % 10;

	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
