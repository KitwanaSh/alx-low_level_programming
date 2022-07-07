#include "main.h"

/**
 * print_numbers - print out from 0 to 9
 *
 * Return: the counting 0-9
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
