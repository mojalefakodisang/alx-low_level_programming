#include <stdlib.h>
#include <time.h>
/*
* main - print any random number and prints if its - or +
* return - Always return 0
* @n - is a variable that returns random number
*/

int main(void)
{
	int n;

	sran(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive \n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative \n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	return(0);
}
