#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - the initialiser
 * struct dog d: the first
 * @d: th pointer structur
 * @name: the pointer char
 * @age: the varible float
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
