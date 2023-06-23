#include <stdio.h>

/**
 * main - Prints Fizz or Buzz
 * Return: Always 0
 */
int main(void)
{
	int i;
	const char *a = "Fizz";
	const char *b = "Buzz";
	const char *c = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", c);
		}
		else if (i % 3 == 0)
		{
			printf("%s", a);
		}
		else if (i % 5 == 0)
		{
			printf("%s", b);
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
