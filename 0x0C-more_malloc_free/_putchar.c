#include <unistd.h>

/**
 * _putchar - get a character
 * @c: The character variable to input
 *
 * Return: 1 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
