#include "main.h"

/**
 * get_endianness - Check if the machine is little or big endian.
 * Return: 1 for little endian, 0 for big endian.
 */

int get_endianness(void)
{
    unsigned int x = 1;
    char *c = (char *)&x;

    return (*c == 1);
}
