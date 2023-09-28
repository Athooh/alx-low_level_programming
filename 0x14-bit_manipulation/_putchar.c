#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes character c to stdout
 * @c: character to print
 * Return: returns 1 if succesful
 * On error, -1 is returned and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
