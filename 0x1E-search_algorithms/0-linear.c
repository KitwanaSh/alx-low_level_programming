#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array
 * @array: array of integers
 * @size: array size
 * @value: searched value
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t increment;

	if (array == NULL)
		return (-1);
	for (increment = 0; increment < size; increment++)
	{
		printf("Value checked array[%ld] = [%d]\n", increment, array[increment]);
		if (array[increment] == value)
			return (increment);
	}
	return (-1);
}