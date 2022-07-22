#include "main.h"

/**
 *_memcpy - cpies n bytes from the memory area src to memory area dest
 *@dest: pointer memory of char type
 *@src: pointer momory of char type
 *@n: unsigned integer n
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
