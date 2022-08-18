#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at a given index
 * @n: pointer of the number
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, -1 if it doesn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0, i = 1;

	if (!n)
		return (-1);
	while (num++ > index)
	{
		i = i << 1;
	}
	*n = *n | i;
	return (1);
}
