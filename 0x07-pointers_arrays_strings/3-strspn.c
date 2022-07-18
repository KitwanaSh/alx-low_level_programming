#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: variable of pointer of char
 * @accept: variable pf a pointer char
 *
 * Return: the number of bytes of initial segment of
 * s which consist only of bytes from accept
 */
unsigned int  _strspn(char *s, char *accept)
{
	char *x = s;
	char *c;

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c == '\0')
			break;
		s++;
	}
	return (s - x);
}

