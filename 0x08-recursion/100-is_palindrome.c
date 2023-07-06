#include "main.h"
#include <stdio.h>

/**
 * length_string - Calculate length of string
 * @s: string to be calculated
 * Return: returns 0 when character is NULL
 */
int length_string(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + length_string(s + 1));
}

/**
 * is_palindrome_recursive - recursively reads through a string palindromical
 * @s: string to be scanned recursively
 * @start: start of the string
 * @end: end of the string
 * Return: Returns 1 on success else 0
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if string is palindromic
 * @s: String to be tested
 * Return: Returns depending on is_palindrome_recursion function
 */
int is_palindrome(char *s)
{
	int length;

	length = length_string(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
