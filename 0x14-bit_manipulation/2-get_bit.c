#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: value
 * @index: index to check the bit
 *
 * Return: returns the value of the bit and that index else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mul, result;

	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	mul = 1 << index;
	result = n & mul;

	if (result == mul)
	{
		return (1);
	}
	return (0);
}
