#include "main.h"

/**
 * puts_half - Prints the second half of @str
 * @str: String to be tested
 * Retun: No return value
 */
void puts_half(char *str)
{
	int i;
	int length;
	int num_half;

	length = 0;
	i = 0;
	while (str[i++])
	{
		length++;
	}
	if (length % 2 != 0)
	{
		num_half = (length + 1) / 2;
	}
	else
	{
		num_half = length / 2;
	}

	i = num_half;
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
