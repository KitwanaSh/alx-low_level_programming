#include "main.h"

/**
 * print_sign - Shows 1 and print + if the number is greater than 0;
 * shows 0 and prints 0 is the number is zero;
 * and lastly show -1 if the number is less than zero
 *
 * @n : represents the numerical numbers in characters
 *
 * Description : print_sign shows 1 if number is
 * greater than 0, and -1 if it is negative and other if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
