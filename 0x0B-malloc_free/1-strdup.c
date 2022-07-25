#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy a string and return a pointer
 * @str: pointer of a type string
 *
 * Return: a copy of a pointer in string
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
