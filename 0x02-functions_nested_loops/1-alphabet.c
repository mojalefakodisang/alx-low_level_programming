#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all alphabets
 *
 * Return: No return value
 */
char print_alphabet()
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
