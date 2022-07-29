#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloc a size of a memory
 * @ptr: the pointer in general
 * @old_size: the previous size
 * @new_size: the assigned new size
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;


	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return ((void *)malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	return (ptr);
	free(ptr);
}
