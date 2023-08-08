#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - it frees the 2D array
 * @grid: its the 2D grid
 * @height: the height dimension of grid
 * Description: its frees memory of grid
 * Return: it returns nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
