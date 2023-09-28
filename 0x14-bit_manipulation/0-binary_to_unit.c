#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: The converted unsigned integer, or 0 if @b is invalid or NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[x] - '0');
	}

	return (decimal_value);
}
