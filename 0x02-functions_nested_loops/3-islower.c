#include <stdio.h>
#include "main.h"

/**
 * _islower - prints if c is lowercase or not
 *
 * @c: returns 1 if character is lower case
 *
 * Return: 1 on success else returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
