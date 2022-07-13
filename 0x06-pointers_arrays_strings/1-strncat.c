#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings by adding the n too
 * @dest: the first string
 * @src: the second string
 * @n: nth byte of the string
 *
 * Return:the concatenation of dest and src including the nth by if it exist
 */char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
