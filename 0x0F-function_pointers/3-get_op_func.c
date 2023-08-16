#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - it picks the correct func to perform
 * the opretation asked by user
 *
 * @x: operation arguement passed
 *
 * Return: returns pointer to the function corresponding
 * to the operation parameter
 */

int (*get_op_func(char *x))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int z = 0;

	while (ops[z].op != NULL && *(ops[z].op) != *x)
		z++;

	return (ops[z].f);
}
