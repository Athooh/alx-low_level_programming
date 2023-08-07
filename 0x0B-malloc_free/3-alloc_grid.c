#include "main.h"
#include <stdlib.h>

/**
 * alloc_grind - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **zzz;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	zzz = malloc(sizeof(int *) * height);

	if (zzz == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		zzz[x] = malloc(sizeof(int) * width);

		if (zzz[x] == NULL)
		{
			for (; x >= 0; x--)
				free(zzz[x]);

			free(zzz);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			zzz[x][y] = 0;
	}
	return (zzz);
}
