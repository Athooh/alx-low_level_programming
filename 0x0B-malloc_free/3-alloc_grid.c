#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this is a nested loop for making grid
 * @width: its the width input
 * @height: the height input
 * Return: it returns pointer to 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **zzz;
	int i, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	zzz = malloc(sizeof(int *) * height);

	if (zzz == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		zzz[i] = malloc(sizeof(int) * width);

		if (zzz[i] == NULL)
		{
			for (; i >= 0; i--)
				free(zzz[i]);

			free(zzz);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
			zzz[i][y] = 0;
	}
	return (zzz);
}
