#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects function to be performed as an operation taking
 * two arguments
 *
 * @s: operator
 *
 * Return: pointer to the valid operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit (99);
}
