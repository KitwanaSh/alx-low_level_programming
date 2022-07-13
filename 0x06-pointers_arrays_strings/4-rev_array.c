#include "main.h"

/**
 * reverse_array - get the given array and reverse it
 * @a:  that the pointer of integer array
 * @n: that's the pointer of integer (number of array)
 *
 * Return:  the arrray in reverse
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
