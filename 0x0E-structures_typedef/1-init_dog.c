#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - the initialiser
 * struct dog d: the first
 * @name: the pointer char
 * age: the varible float
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	init_dog = malloc(sizeof(struct dog));
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
