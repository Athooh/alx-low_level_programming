#include "main.h"

/**
 * get_bit - it returns bit value index in a decimal number
 * @n: the number to search
 * @index: the index of bit
 *
 * Return: returns the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
