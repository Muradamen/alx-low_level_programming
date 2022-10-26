
#include "main.h"

/**
 * free_grid - free a 2d grid
 * @grid: the grid
 * @height: the height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int ih;

	for (ih = 0; ih < height; ih++)
		free(grid[ih]);
	free(grid);
}
