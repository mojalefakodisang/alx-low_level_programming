#include "main.h"

/**
 * binary_to_uint - converts a binary string to a decimal
 *
 * @b: binary string
 *
 * Return: returns the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		else
		{
			i = (i << 1) | (*b - '0');
		}
		b++;
	}
	return (i);
}
