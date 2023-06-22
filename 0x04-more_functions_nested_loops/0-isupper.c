#include <stdio.h>
#include "main.h"

/**
 * _isupper - Returns 1 if c is a uppercase letter
 * @c: Integer returned if uppercase
 *
 * Return: return 1 on success else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
