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
	unsigned int len = strlen(str) + 1;
	char *result = (char *) malloc(len);

	if (result == (char *) 0)
		return (char *) 0;
	return ((char *) memcpy(result, str, len));
}
