#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Reset value of n to 98
 * @n: Variable to be manipulatedi
 * Return: No return value
 */
void reset_to_98(int *n)
{
	int **temp;

	temp = &n; /* gives temp address of n variable */
	**temp = 98; /* setting a value 98 to the address given */
}
