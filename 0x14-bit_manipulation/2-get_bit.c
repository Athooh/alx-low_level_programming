#include "main.h"

/**
 * get_bit - returns the value of the bit at a given index in a number
 * @n: the number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit at the specified index, or -1 if
 * index is out of range
 */

int get_bit(unsigned long int n, unsigned int index)
{
    if (index > 63)
        return (-1);

    return ((n >> index) & 1);
}
