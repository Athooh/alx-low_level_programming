#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: The converted unsigned integer, or 0 if @b is invalid or NULL.
 */

unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
