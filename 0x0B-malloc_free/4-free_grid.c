#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2d grid alloc_grid
 * @grid: double pointer
 * @height: int height
 * return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
