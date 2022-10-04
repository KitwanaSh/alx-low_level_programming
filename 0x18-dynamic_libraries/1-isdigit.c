#include "main.h"

/**
 * _isdigit - try 1 when c is digit or else 0
 * @c: any character evaluated as digit (single)
 *
 * Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
