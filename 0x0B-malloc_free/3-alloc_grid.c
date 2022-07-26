#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D arrays
 * @width: first dim
 * @height: second dim
 *
 * Return: NULL on failure or if weight or height
 * is less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
	int m, n, o, **ch;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ch = malloc(height * sizeof(*ch));
	if (ch == NULL)
		return (ch);
	for (m = 0; m < height; m++)
	{
		ch[m] = malloc(width * sizeof(int));
		if (ch[m] == NULL)
		{
			for (o = 0; o < m; o++)
				free(ch[o]);
			free(ch);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			ch[m][n] = 0;
	}
	return (ch);
}
