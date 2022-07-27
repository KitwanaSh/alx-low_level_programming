#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the 2D array
 * @grid: pointer of pointer int
 * @height: variable int
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	for (height = height - 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
