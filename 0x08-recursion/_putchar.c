#include <unistd.h>

/**
 * _putchar - gets the output of one character at at time
 * @c: The character variable
 *
 * Return:  1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
