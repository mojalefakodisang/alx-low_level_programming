#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: Array containing elements to be printed
 * @b: Constant byte
 * @n: Size of the memory area
 * Return: Returns a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
