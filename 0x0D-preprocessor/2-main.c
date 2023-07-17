#include <stdlib.h>
#include <stdio.h>

#ifndef FILE
#define FILE __FILE__

#endif

/**
 * main - prints the file name
 *
 * Return: returns 0 on success
 */
int main(void)
{

	printf("%s\n", FILE);
	return (0);
}
