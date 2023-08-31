#include "main.h"

/**
 * flip_bits - it counts the bit number change
 * to get from number to number
 * @n: the first number
 * @m: the second number
 *
 * Return: returns bit number to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, cnt = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			cnt++;
	}

	return (cnt);
}
