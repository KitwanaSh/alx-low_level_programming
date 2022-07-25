#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: the size variable
 * @c: the input character
 *
 * Return: NULL or 0, all depending
 */
char *create_array(unsigned int size, char c)
{
	char *chr = NULL;
	unsigned int i;

	if (size > 0)
	{
		chr = malloc(size);
	}
	if (chr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			chr[i] = c;
		}

	}
	return (chr);
}
