#include "main.h"

/**
 * set_bit - it sets a bit at given index to 1
 * @n: the pointer to the number changed
 * @index: the index of bit to set to 1
 *
 * Return: returns 1 for success, -1 if unsuccesful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
