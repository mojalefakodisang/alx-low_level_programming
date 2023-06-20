#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase else 0
 * @c: any character from 'a' to 'z'
 *
 * Return: Returns 1 on success
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
