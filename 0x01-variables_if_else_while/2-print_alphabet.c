#include <stdio.h>
/**
 * The following code prints out aplphabets from a to z vertically
 *
 * lowerCaseAlphabets: prints alphabets from a to z
 * Return: returns the fuction
 */

int lowerCaseAlphabets(void)
{
	char letters;

	letters = 'a';
	while (letters <= 'z')
	{
		printf("%c ", letters);
		letters++;
	}
	printf("\n");

	return lowerCaseAlphabets();
}
/**
 * main: returns lowerCaseAlphabets function
 * return - Always returns 0 (success)
 */

int main(void)
{
	lowerCaseAlphabets();
	return (0);
}
