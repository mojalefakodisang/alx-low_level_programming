#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function used to copy string of one variable
 * @dest: Variable that accepts the value/sting
 * @src: Source of the string
 * Return: Returns value of @dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	dest[index] = src[index];

	while (src[index] != '\0')
	{
		index++;
		dest[index] = src[index];
	}
	return (dest);
}
