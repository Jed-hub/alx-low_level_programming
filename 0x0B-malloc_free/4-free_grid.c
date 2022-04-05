#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimentional array of integers.
 * @grid: The 2-dimentional array of integeres to be freed.
 * @height: The height of grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
