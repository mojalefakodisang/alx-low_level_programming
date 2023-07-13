#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int wordLength(char *str);
int wordCount(char *str);
char **strtow(char *str);
/**
 * wordLength - counts the length of the word
 *
 * @str: string to be counted
 *
 * Return: returns length of the word
 */
int wordLength(char *str)
{
	int index;
	int length;

	index = 0;
	length = 0;
	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}
	return (length);
}

/**
 * wordCount - counts number of words in a string
 *
 * @str: string to be counted
 *
 * Return: returns number of words in a string
 */
int wordCount(char *str)
{
	int index;
	int words;
	int length;

	words = 0;
	length = 0;
	for (index = 0; *(str + index); index++)
	{
		length++;
	}

	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += wordLength(str + index);
		}
	}

	return (words);

}

/**
 * strtow - converts a string into words only
 *
 * @str: string to be converted
 *
 * Return: returns converted string
 */
char **strtow(char *str)
{
	char **string;
	int index, words, letters, w, l;

	index = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	words = wordCount(str);

	if (words == 0)
	{
		return (NULL);
	}

	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
		{
			index++;
		}
		letters = wordLength(str + index);

		string[w] = malloc(sizeof(char) * (letters + 1));

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(string[w]);
			}
			free(string);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
		{
			string[w][l] = str[index++];
		}
		string[w][l] = '\0';
	}
	string[w] = NULL;

	return (string);
}
