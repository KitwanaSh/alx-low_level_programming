#include "main.h"

/**
 * swap_int - swaps the value of a to be b and the one of b to a
 * @a: This is the pointer variable asigned to a
 * @b: This is the pointer variable asigned to b
 *
 * Return: Nothing at all
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
