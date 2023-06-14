#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a
 * 2 dimensional grid
 * @grid: grid of array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
		return;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
