#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes the character c to std output
 * @c: The character to be printed
 * Return: return 1 if successful
 * else -1 if error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
