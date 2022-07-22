#include <unistd.h>

/**
 * _putchar - get a character
 * @c: variable character input
 *
 * Return: a character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
