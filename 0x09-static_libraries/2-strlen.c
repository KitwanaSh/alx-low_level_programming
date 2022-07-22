#include "main.h"

/**
 * _strlen - showing up the number of characters in a string
 * @s: the point of string is declare
 *
 * Return: the lenght of the string in s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
