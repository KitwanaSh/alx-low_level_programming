#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the dogs
 * @d: the pointer element
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
