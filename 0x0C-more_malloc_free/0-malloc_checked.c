#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory allocation using malloc
 * @x: amount of bytes allocated
 * Return: returns a pointer to the memory
 */

void *malloc_checked(unsigned int x)
{
	void *ptr;

	ptr = malloc(x);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
