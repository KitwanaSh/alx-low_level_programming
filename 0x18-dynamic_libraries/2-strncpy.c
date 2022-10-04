#include "main.h"

/**
 * _strncpy- copy the string of secondvariable to the string of first var
 * @dest: the first string
 * @src: the second string
 * @n: the pointer of integer dertermining the number of byte
 *
 * Return: The string src copied to the string dest (most n bytes are copied)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
