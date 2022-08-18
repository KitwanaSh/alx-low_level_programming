#include "main.h"

/**
 * clear_bit - set a value of bit to 0 at a given index
 * @n: The pointer ot the normal number
 * @index: the index, strating from 0 of the bit you want to set
 *
 * Return: 1 if it worked, 0 for not happening
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (!n || (index > (sizeof(unsigned long int)* 8) -1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
