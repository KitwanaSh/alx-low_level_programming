#include "main.h"

/**
 * flip_bits - number of bits we'd need to flip
 * @n: the normal number
 * @m: the element that is flipped
 *
 * Return: number of bits that needs to be flippe to
 * get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m;
	int cnt = 0;

	while (tmp)
	{
		if (1 & tmp)
			cnt++;
		tmp >> = 1
	}
	return (cnt);
}
