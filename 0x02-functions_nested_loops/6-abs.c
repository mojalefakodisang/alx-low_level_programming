#include <stdio.h>
#include "main.h"

/**
 * _abs - Print absolute values of integer 'i'
 * @i: Any given integer
 *
 * Return: Always return 0 on success
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	return (0);

}
