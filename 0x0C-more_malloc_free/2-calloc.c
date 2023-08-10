#include <stdlib.h>
#include "main.h"

/**
 * *_memset - it fills the memory with constant byte
 * @y: the area of memory filled
 * @z: characters to copy
 * @x: amount of time to copy z
 * Retrun: returns the pointer to the memory area y
 */

char *_memset(char *y, char z, unsigned int x)
{
	unsigned int i;

	for (i = 0; i < x; i++)
	{
		y[i] = z;
	}
	return (y);
}
/**
 * *_calloc - it allocates memory for an array
 * @n: amount of elements in the array
 * @size: the size of each element
 * Return: returns pointer allocated memory
 */

void *_calloc(unsigned int n, unsigned int size)
{
	char *ptr;

	if (n == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * n);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, n * size);

	return (ptr);
}
