#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a character
 * @s: A double pointer
 * @to: Pointer
 * Return: No return value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
