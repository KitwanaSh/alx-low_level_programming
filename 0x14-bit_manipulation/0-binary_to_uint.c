#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: The pointer to the string of 0 and 1  chars
 *
 * Return: the number converted or
 * 0 if there i char in b that is not 1 0r 1
 * of if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convt = 0;

	unsigned int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		convt = convt << 1;
		convt = convt | (b[i] - '0');
	}

	return (convt);
}
