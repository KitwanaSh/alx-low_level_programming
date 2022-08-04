#include <unistd.h>

/**
 * _putchar - print character
 * @c: the variable chararacter
 *
 * Return: 1 for success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
