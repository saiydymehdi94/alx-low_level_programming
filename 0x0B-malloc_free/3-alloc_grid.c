#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid -Function that returns a pointer.
 * a 2D array of integers.
 * @width: columns
 * @height: rows
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(int *));

	if (g == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		g[x] = malloc(width * sizeof(int));
		if (g[x] == NULL)
		{
			for (x = 0; x < height; x++)
				free(g[x]);
			free(g);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			g[x][y] = 0;
	}

	return (g);
}
