#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to
 *             convert one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int exclusive = n ^ m;
    unsigned int cnt = 0;

    while (exclusive > 0)
    {
        cnt += exclusive & 1;
        exclusive >>= 1;
    }

    return cnt;
}
