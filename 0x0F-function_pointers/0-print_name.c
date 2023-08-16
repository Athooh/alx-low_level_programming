#include "function_pointers.h"
#include <stdio.h>

/**
 * prime_name - it prints name using pointer to function
 * @name: added string
 * @x: the pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*x)(char *))
{
	if (name == NULL || x == NULL)
		return;
	x(name);
}
