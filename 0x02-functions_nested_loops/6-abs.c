#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */

int _abs(int n)
{
	if (n < 0)
	{
		int x;

		x = n * -1;
		return (x);
	}
	return (n);
}
