#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - the iterator of array
 * @array: pointer variable
 * @size: size of the array
 * @action: pointer to the funtion
 *
 * return: element of array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		(*action)(*array);
		array++;
	}
}
