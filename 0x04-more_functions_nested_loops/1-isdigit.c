#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Returns 1 if char c is a digit using ASCII
 * @c: Characters to be returned
 *
 * Return: Returns 1 on success else 0
 */
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
