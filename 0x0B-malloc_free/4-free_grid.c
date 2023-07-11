#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory allocated to alloc_grid
 *
 * @grid: grid to be freed
 *
 * @height: height of the grid
 *
 * Return: No rrturn value
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}