#include "main.h"

/**
 * srt - easy return qurt
 * @a: input
 * @b: iterable
 *
 * Return: sqrt
 */
int srt(int a, int b)
{
	if (b % (a / b) == 0)
	{
		if (b * (a / b) == a)
			return (b);
		else
			return (-1);
	}
	return (0 + srt(a, b + 1));
}
/**
 * _sqrt_recursion - get a square root of a number
 * @n: a variable integer to be calculated with the
 * suare root
 *
 * Return: the square root of a given number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (srt(n, 2));
	}
}
