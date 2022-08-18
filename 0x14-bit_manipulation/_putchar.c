#include <unistd.h>

/**
 * _putchar - prints one character
 * @c: the input char
 *
 * Return: Always 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
