#include "main.h"

/**
 * get_bit - give the value of a bit at a given index
 * @n: the normal number
 * @index: the index, starting from 0 of the bit to get
 *
 * Return: The value of a bit at index index, or
 * -1 if an error happened
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n > 63)
		return (-1);
	return ((n >> index) & 1);
}
