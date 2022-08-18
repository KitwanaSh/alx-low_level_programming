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
	unsigned long int tmp, i = 1, cnt = 0;

	tmp = n ^ m;

	while (tmp >= i)
	{
		if (i & tmp)
			cnt++;
		i = i << 1;
	}
	return (cnt);
}
