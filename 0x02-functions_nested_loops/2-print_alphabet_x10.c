#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 * Return: No value to return
 */
void print_alphabet_x10(void)
{
	int i;

	i = 1;
	while (i <= 10)
	{
		char letters;

		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar(i);
		i++;
	}
}
