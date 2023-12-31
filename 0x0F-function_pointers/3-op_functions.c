#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two numbers
 * @a: first number
 * @b: second number
 * Return: returns sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: returns difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: returns product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: returns division of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: returns remainder of division of a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
