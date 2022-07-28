#include "main.h"
#include <stdlib.h>

/**
 * _calloc - the mem location of
 * @nmemb: the number of nemeory in mytes
 * @size: The size to be returned
 *
 * Return: Null if malloc failes, ..
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		str[nmemb] = 0;
	return ((void *)str);
}
