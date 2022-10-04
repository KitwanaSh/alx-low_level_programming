#include <unistd.h>

/**
 * _putchar - To print a character
 * @c: the variable character input
 *
 * Return: The character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
