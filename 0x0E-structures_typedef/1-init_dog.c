#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a structure dog
 *
 * @d: Structure to pointed to
 * @name: name of the dog structure
 * @age: age of the dog structure
 * @owner: name of the owner in the dog structure
 *
 * Return: returns the structure dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
