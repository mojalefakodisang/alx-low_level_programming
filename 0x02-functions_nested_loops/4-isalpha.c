#include "main.h"

/**
 * _isalpha - Returns 1 if @c is lower- or uppercase
 * @c: Any character from 'a' or 'A' to 'z' or 'Z'
 *
 * Return: Returns 1 on success
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 97))
	{
		return (1);
	}
		return (0);
}
