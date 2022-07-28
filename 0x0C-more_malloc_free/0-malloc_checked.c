#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - checks the pointer that malloc returns
 * @b: the input variable
 *
 * Return: a pointer or 98  for failure
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (void *)malloc(sizeof(ptr) * b);

	if (ptr == NULL)
	{
		printf("98");
	}
	return (ptr + b);
	free(ptr);
}
