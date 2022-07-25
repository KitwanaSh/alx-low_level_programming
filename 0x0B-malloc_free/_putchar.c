#include <unistd.h>

/**
 * _putchar - insert a character
 * @c: The input character variable)
 *
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
