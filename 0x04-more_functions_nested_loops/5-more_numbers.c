#include "main.h"

/**
 * more_numbers - print 1 to 14 x10
 *
 * Return: the numbers x10
 */
void more_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		while (i < 10)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
