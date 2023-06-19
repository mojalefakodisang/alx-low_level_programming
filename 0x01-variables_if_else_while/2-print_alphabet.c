#include <stdio.h>
/**
 * The following code prints out aplphabets from a to z vertically
 *
 * lowerCaseAlphabets: prints alphabets from a to z
 * Return: returns the fuction
 */

int lowerCaselphabets(void)
{
	char letters;
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	return (0);
}
