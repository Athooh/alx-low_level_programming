#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes character c to stdout
 * @c: character to print
 * Return: returns 1 if successful, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1) == 1 ? 1 : -1);
}
