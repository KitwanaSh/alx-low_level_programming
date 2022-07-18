#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals
 * of square matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int b, sum_1 = 0, sum_2 = 0;

	for (b = 0; b < size; b++)
	{
		sum_1 += a[(size + 1) * b];
		sum_2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}
