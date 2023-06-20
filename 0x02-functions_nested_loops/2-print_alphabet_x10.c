#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints all alphabets times 10
 *
 * Return: No return value
 */
char print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
	return (0);
}
