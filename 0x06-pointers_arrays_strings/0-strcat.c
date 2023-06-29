#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Appends src string into dest string
 * @dest: First string
 * @src: String to be appended to dest
 * Return: Returns dest string
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
