#include "main.h"
#include <unistd.h>

/**
 * _putchar - display the character c to standard output 
 * @c: character variable to be printed
 * Return: if successful return 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
