#include "main.h"

/**
 * free_grid - free the grid
 * @grid: parameter
 * @height: parameter
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
