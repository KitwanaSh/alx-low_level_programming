#include "main.h"

/**
 * print_binary - print a number in its binary version
 * @n: the number to print
 *
 * Return: Nothing or no
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
