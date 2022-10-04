#include "main.h"

/**
 * _strchr - locate a certain character in a string
 * @s: located char
 * @c: character that finds the location
 *
 * Return: a pointer to the first occurence of s, or NULL
 * if the character is not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (0);
}
