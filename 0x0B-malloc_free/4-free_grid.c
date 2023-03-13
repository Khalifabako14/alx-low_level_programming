#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional grid previously created by
 * your alloc_grid function.
 * @grid: This is a dimesional array
 * @height: This is the numbers of rows has the array
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
