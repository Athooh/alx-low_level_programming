#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - it prints each array element on newline
 * @array: its an array
 * @size: the number of elements to print
 * @action: the pointer to print in regular || hex
 * Return: it returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
