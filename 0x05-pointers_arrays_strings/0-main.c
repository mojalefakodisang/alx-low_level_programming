#include "main.h"
#include <stdio.h>

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	rest_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
