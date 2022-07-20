#include "main.h"

/**
 * factorial - the factorial of a given number
 * @n: the given number integer
 *
 * Return:  a factorial of a number, if the number is
 * less than 0, we return -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
