#include <stdlib.h>
#include <time.h>
/*
main: code will print any random number and
return: Always return 0
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
