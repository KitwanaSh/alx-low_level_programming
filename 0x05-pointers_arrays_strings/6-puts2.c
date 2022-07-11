#include "main.h"

/**
 * puts2 - output evely the string value
 * @str:  the pointer of string representation
 *
 * Return:  the even order of the string
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
