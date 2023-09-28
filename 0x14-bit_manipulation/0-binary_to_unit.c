#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: The binary string to convert.
 *
 * Return: The converted unsigned integer, or 0 if @b is invalid or NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		
		decimal_value = (decimal_value << 1) | (b[i] - '0');
	}

	return (decimal_value);
}
