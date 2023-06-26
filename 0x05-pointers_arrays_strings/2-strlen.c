#include "main.h"

/**
 * _strlen - Prints length of a string
 * @s: String to be counted
 * Return: Returns n
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
