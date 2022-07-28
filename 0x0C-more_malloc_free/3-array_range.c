#include "main.h"
#include <stdlib.h>

/**
 * array_range -  the range of the array
 * @min: The min variable int
 * @max: The max variable int
 *
 * Return: Null at fails, the pointer of the
 * newly created array
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
