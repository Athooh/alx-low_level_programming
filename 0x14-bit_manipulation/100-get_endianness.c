#include "main.h"

/**
 * get_endianness - it checks if a machine is little or big endian
 * Return: returns 0 for big and 1 for little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
