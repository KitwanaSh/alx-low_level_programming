#include <unistd.h>

/**
 * _putchar - prints character
 * @c: the input character
 *
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
