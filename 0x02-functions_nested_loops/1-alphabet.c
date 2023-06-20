#include "main.h"

/**
 * print_alphabet - prints alphabets in alphabetical order
 *
 * Return:No value to return
 */
void print_alphabet(void)
{
	char letters;

	letters = 'a';
	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
