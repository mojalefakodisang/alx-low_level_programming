#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: value 1
 * @m: value 2
 *
 * Return: returns count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, diff;
	unsigned int i, count = 0;

	result = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (diff & result))
		{
			count++;
		}
		result <<= 1;
	}
	return (count);
}
