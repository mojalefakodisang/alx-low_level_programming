#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies src into dest string
 * @dest: Destination string
 * @src: Source string
 * @n: String length
 * Return: Returns dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
