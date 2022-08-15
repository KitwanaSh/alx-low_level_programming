#include <unistd.h>

/**
 * _putchar - print a single character
 * @c: the input char
 *
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
