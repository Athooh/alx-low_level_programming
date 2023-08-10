#include <stdlib.h>
#include "main.h"

/**
 * *array_range - it creates an integers array
 * @max: the maximum range of values and number of elements stored
 * @min: the minimum range of values stored
 * Return: returns the pointer to the new array
 */

int *array_range(int max, int min)
{
	int *ptr;
	int y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		ptr[y] = min++;

	return (ptr);
}
