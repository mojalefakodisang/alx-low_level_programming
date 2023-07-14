#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area from source to memory of destination string
 *
 * @dest: destination string
 * @src: source string
 * @n: size of the source string
 *
 * Return: returns destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory area with a new memory area
 *
 * @ptr: old pointer to a old memory area
 * @old_size: size of the old pointer
 * @new_size: size of the new memory area
 *
 * Return: returns a newly allocated memory area
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		_memcpy(new_ptr, ptr, old_size);
	}
	if (new_size > old_size)
	{
		_memcpy(new_ptr, ptr, new_size);
	}

	free(ptr);
	return (new_ptr);
}
