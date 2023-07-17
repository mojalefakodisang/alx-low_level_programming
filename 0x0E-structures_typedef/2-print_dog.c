#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints contents of dog structure
 *
 * @d: structure to be pointed to
 *
 * Return: no return value;
 */
void print_dog(struct dog *d)
{

	if (d)
	{
		if (!(d->name))
		{
			d->name = "(nil)";
		}
		if (!(d->owner))
		{
			d->owner = "(nil)";
		}
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
