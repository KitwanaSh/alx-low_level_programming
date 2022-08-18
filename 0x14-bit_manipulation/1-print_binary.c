#include "main.h"

/**
 * print_binary - print a number in its binary version
 * @n: the number to print
 *
 * Return: Nothing or no
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	spot_print(n, 1);
}

/**
 * spot_print -print an in in binary
 * @n: the number to convert
 * @i: the times it will be calculated
 */

void spot_print(unsigned long int n, unsigned long int i)
{
	if (i > n)
		return;
	spot_print(n, i << 1);
	_putchar(n & i ? '1' : '0');
}
