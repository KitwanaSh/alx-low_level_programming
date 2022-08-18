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
	if (!n || (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n = *n | (1 << index;
	return (1);
}
