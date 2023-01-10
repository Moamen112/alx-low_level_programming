#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2d grid that was created by alloc_grid
 * @grid: pointer to grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
