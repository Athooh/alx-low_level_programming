#include "main.h"

/**
 * print_binary - it prints binary equivalent to a decimal number
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	int x, cnt = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
