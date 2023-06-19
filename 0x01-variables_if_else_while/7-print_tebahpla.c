#include <stdio.h>
#include <string.h>
/**
 * main: Entry point of the prorgam
 * Description: prints lowercase alphabets in reverse
 *
 * return - 0 on success
 */

int main(void)
{
	int i;

	for(i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
