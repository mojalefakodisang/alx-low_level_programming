#include "main.h"
#include <stdio.h>

/**
 * rot13 - Swaps characters of alphabets
 * @str: String to be converted
 * Return: Str value is returned
 */
char *rot13(char *str)
{
	int i;
	int k;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 52; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
