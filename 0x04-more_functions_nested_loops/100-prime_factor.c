#include <stdio.h>

/**
 * main - Prints out the largest prime factor of number
 * Return: Always 0
 */
int main(void)
{
	long int number = 612852475143;
	long int largest_prime_factor = 2;
	long int i;

	while (number % 2 == 0)
	{
		number /= 2;
	}
	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largest_prime_factor = i;
			number /= i;
		}
	}

	if (number > 2)
	{
		largest_prime_factor = number;
	}

	printf("%ld\n", largest_prime_factor);

	return (0);
}
