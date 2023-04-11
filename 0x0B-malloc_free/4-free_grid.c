#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -frees 2D array
 * @grid: 2D grid
 * @height: D of grid
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
	{
		free(grid[w]);
	}
	free(grid);
}
