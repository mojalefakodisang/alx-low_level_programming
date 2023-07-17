#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocates memory area for dog structure
 *
 * @d: structure to be dealloacted memory area
 *
 * Return: no return value
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
