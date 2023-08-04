#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argv: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main (int arg __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
