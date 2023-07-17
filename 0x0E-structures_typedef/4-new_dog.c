#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - copies contents of dog structure
 * @name: copied name of the dog
 * @age: copied age of the dog
 * @owner: copied name of the owner
 * Return: if all is true, it returns pointer to the dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *copyName, *copyOwner;
	int length1, length2, i;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
	{
		return (NULL);
	}
	for (length1 = 0; name[length1]; length1++)
		;
	for (length2 = 0; owner[length2]; length2++)
		;
	length1++;
	length2++;
	copyName = malloc(length1);
	if (!copyName)
	{
		free(ptr);
		return (NULL);
	}
	copyOwner = malloc(length2);
	if (!copyOwner)
	{
		free(ptr);
		free(copyName);
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		copyName[i] = name[i];
	}
	for (i = 0; i < length2; i++)
	{
		copyOwner[i] = owner[i];
	}
	ptr->name = copyName;
	ptr->owner = copyOwner;
	ptr->age = age;
	return (ptr);
}
