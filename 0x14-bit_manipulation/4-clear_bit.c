#include "main.h"

/**
 * clear_bit - Clears a bit at a specific index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
        return (-1);

    *n &= ~(1UL << index);
    return (1);
}
