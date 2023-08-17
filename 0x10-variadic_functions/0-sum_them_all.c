#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @y: number of parameters passed to function
 * @...: variable parameter numbers to get the sum
 * Return: returns if n == 0 - 0.
 * otherwise - sum of all parameters.
 */

int sum_them_all(const unsigned int y, ...)
{
	va_list ap;
	unsigned int x, sum = 0;

	va_start(ap, y);

	for (x = 0; x < y; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
