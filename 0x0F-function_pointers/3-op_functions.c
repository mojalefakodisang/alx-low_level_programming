#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns sum of the integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns the difference of integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns the product of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns quotation of integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulos of integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: returns remainder of the integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
