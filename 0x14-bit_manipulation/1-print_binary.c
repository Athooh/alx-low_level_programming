#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	int bit_count = 0;
	int shift;

	for (shift = 63; shift >= 0; shift--)
	{
		if ((n >> shift) & 1)
			break;
	}

	if (shift < 0)
		_putchar('0'); /* If n is 0, print '0' */
	else
	{
		for (; shift >= 0; shift--)
		{
			if ((n >> shift) & 1)
			{
				_putchar('1');
				bit_count++;
			}
			else
				_putchar('0');
		}
	}

	if (bit_count == 0)
		_putchar('0'); /* If no set bits, print '0' */
}
