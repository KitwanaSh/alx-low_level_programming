#include "main.h"

/**
 * _strlen_recur - get the length of a string
 * @s: pointer of type string
 *
 * Return: the length if a string
 */
int _strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recur(s + 1));
}

/**
 * comparable - compares each character of a string.
 * @s: pointer of type char
 * @i1: first place iterator
 * @i2: second place iterator
 *
 * Return: the comparision or a string
 */
int comparable(char *s, int i1, int i2)
{
	if (*(s + i1) == *(s + i2))
	{
		if (i1 == i2 || i1 == i2 + 1)
			return (1);
		return (0 + comparable(s, i1 + 1, i2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks fif a string is empty
 * @s: pointer of type character
 *
 * Return: 1 if a string is palindrome or
 * 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (comparable(s, 0, _strlen_recur(s) - 1));
}
