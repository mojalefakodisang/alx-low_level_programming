#include <stdio.h>
/**
 * The following code prints out aplphabets from a to z vertically
 *
 * lowerCaseAlphabets: prints alphabets from a to z
 * Return: returns the fuction
*/

int main(void)
{
	int c;
	
	c ='a';
	while (c <= 'z') {
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
