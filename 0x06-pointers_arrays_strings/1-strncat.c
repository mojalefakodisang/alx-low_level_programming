#include "main.h"
#include <stdio.h>

/**
 * _strncat - Appends src string into dest string
 * @dest: First string
 * @src: String to be appended to dest
 * @n: Length of string
 * Return: Returns dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && n > 0)
	{
		dest[a] = src[b];
		a++;
		n--;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
