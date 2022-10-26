#include "hash_tables.h"

/**
 * hash_djb2 - to implement the djb2 algorithm
 * @str: string generator of hash
 *
 * Return: The hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int cnt;

	hash = 5381;
	while ((cnt = *str++))
	{
		hash = ((hash << 5) + hash) + cnt;
	}

	return (hash);
}
