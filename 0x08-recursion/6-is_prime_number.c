#include "main.h"

/**
 * is_prime_number - get 1 if it is prime number
 * @n: input varaible of type n
 *
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else
		return (n % 2 == 1);
}

