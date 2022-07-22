#include "main.h"

/**
 * _memset - fills the first n bytesof the
 * memory area pointed to by s with the constant byte b
 * @s: memory address to be pointedt to in char
 * @b: constant byte
 * @n: integer bytes
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr = (unsigned char *)s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
