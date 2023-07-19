#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name depending on the function pointer
 *
 * @name: name to be printed
 * @f: function pointer to a specific function
 *
 * Return: no return value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
