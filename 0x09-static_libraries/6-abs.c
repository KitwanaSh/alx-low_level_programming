#include "main.h"

/**
 * _abs - prints an absolute value of a given number
 * @N: prints any integer number to absolute
 *
 * Return: a number in absolute
 */
int  _abs(int N) /** int - any nymber must be an integer*/
{
	if (N < 0)
	{
		return ((-1) * N);
	}
	else
	{
		return (N);
	}
	return (0);
}
