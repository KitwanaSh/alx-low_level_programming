#include "main.h"

/**
 * _isupper - try 1 if c returns an uppercase character
 * @c: The single character to be checked
 *
 * Return: 1 if c is upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
