#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks the pointer that malloc returns
 * @b: the input variable
 *
 * Return: a pointer or 98  for failure
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
