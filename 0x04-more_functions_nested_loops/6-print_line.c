#include "main.h"

/**
 * print_line - prints line (-) n times
 * @n: the nuber of time n should be printed
 *
 * Return: line n times or just a new line if less than or 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		if (n > 0)
		{
			_putchar('_');
			n++;
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
