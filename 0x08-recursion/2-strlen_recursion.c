#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Prints the length of the string
 * @s: string to be counted
 * Return: Returns 0 if NULL, and or else 1
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
