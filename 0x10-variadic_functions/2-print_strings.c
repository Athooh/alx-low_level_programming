#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - it prints strings and a newline after
 * @separator: string printed between strings
 * @y: number of strings passed to a function
 * @...: variable number of strings to print
 * Description: printed if seperator is not NULL
 * if a string is NULL, (nil) gets printed instead
 */

void print_strings(const char *separator, const unsigned int y, ...)
{
	va_list strings;
	char *str;
	unsigned int idx;

	va_start(strings, y);

	for (idx = 0; idx < y; idx++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (idx != (y - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
