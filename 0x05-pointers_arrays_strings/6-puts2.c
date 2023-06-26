#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints elements of @str by its index in multiples of 2
 * @str: String to be tested
 * Return: No return value
 */
void puts2(char *str)
{
	int index;
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (index = 0; index < length - 1; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
