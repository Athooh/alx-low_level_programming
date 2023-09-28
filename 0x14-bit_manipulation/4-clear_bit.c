#include "main.h"

/**
 * clear_bit - it sets the bit value to 0
 * @n: the number pointer to change
 * @index: the index of the bit to clear
 *
 * Return: returns 1 for success, -1 if unsuccesful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
