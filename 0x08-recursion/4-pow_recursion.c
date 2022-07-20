#include "main.h"

/**
 * _pow_recursion - value of a number to the power of
 * another number
 * @x: variable integer, the value to be powered
 *@y: variable int, the power value
 *
 * Return: The value x to the power of y
 * if y is less than 0, the function returns -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
