#include <stdio.h>

int lowerCaseAlphabets(void)
{
    int letters;

    letters = 'a';

    while (letters <= 'z')
    {
        printf("%c", letters);
        letters++;
    }
    return lowerCaseAlphabets();
}

int upperCaseAlphabets(void)
{
    int lettersUpper;

    lettersUpper = 'A';

    while (lettersUpper <= 'Z')
    {
        printf("%c", lettersUpper);
        lettersUpper++;
    }
    return upperCaseAlphabets();
}

int main(void)
{
	char alphabets;

	alphabets = lowerCaseAlphabets && upperCaseAlphabets;

	printf("%c \n", alphabets);
	return 0;
}
