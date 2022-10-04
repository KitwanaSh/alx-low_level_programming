#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string of any set of bytes
 * @s: pointer of type char s
 * @accept: pointer of type char accpet
 *
 * Return:  pointer of a by s that matches
 * one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *c = accept;

	if (!*s)
		return ((char *) NULL);
	while (*s)
	{
		for (c = accept; *c; c++)
	{
		if (*s == *c)
			break;
	}
	if (*c)
		break;
	s++;
	}
	if (*c == '\0')
	s = NULL;
	return ((char *) s);
}
