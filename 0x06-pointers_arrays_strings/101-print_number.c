#include "main.h"

/**
* print_number - prints an integer.
* @n: The value in integer.
*
* Return: Nothing.
*/
void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		n = 45;
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = i;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		n = ((i / count) % 10) + 48;
	}
}
