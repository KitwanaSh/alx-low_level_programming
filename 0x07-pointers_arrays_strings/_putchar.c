#include <unistd.h>
/**
 * _putchar - return the character c in stdout
 * @c: the character to return
 *
 * Return: for success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
