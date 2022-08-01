#include <unistd.h>

/**
 * _putchar - the print char function
 * c: The variable character
 *
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
