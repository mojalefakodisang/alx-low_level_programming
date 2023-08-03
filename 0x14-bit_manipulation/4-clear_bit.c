#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 *
 * @n: value
 * @index: index at which bit is changed
 *
 * Return: returns 1 on success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result;

	if (n == 0)
	{
		return (0);
	}
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	result = ~(1 << index);
	*n = *n & result;
	return (1);
}
