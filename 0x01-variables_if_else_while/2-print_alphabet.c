#include <stdio.h>

struct lowerCaseAlphabets()
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		printf("%c \n", letters);
	}
}

int main(void)
{
	lowerCaseAlphabets();
	return (0);
}
