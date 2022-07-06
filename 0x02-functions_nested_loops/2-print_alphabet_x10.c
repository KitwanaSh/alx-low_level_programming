#include "main.h"

/**
 * print_alphabet_x10 - the void to print alphabets
 *
 * Return :nothing
 */
void print_alphabet_x10(void)
{

	int alpha = 0, c;

	while(alpha < 10)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		alpha++;
	}
}
