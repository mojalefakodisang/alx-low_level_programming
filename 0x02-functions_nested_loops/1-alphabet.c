#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all alphabets
 *
 * Return: No return value
 */
char print_alphabet(void)
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

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
