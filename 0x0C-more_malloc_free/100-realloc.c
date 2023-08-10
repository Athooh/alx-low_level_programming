#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - it reallocates memory block using malloc and free
 * @old_size: the size of the allocated memory for ptr
 * @new_size: the size of the new memory block
 * @ptr: the pointer to the memory allocated by malloc
 * Return: returns the pointer of the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptr1[x] = old_ptr[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptr1[x] = old_ptr[x];
	}
	free(ptr);
	return (ptr1);
}
