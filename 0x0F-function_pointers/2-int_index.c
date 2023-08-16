#include "function_pointers.h"

/**
 * int_index - it returns indx place if comparison == True, else -1
 * @array: the array variable
 * @size: the size of elements in array
 * @cmp: the pointer to funtion of one of 3 in main
 * Return: returns 0 if succesfull
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
