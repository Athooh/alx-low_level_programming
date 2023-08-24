#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - it prints numbers and a new line
 * @separator: string printed between numbers
 * @y: number of integers passed to function
 * @...: variable numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int y, ...)
{
	va_list nums;
	unsigned int idx;

	va_start(nums, y);

	for (idx = 0; idx < y; idx++)
	{
		printf("%d", va_arg(nums, int));

		if (idx != (y - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
