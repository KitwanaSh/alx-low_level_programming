#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - print a strings
 * @s: pointer of type char
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if ((*s >= 'a' && *s <= 'z')
	|| (*s >= 'A' && *s <= 'Z')
	|| (*s == ' '))
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}
