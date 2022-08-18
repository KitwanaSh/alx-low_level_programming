#include "main.h"

/**
 * get_endianness - checkes the endianness
 *
 * Return: 0 for big endian, 1 for little one
 */
int get_endianness(void)
{
	int i = 1;

	char *c = (char *)(&i);

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
