#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints simple operations results
 * @argc: number of arguments provided to a program
 * @argv: array of pointers to arguments
 * Return: returns 0 if succesfull
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int numb1, numb2;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	numb1 = atoi(argv[1]);
	ops = argv[2];
	numb2 = atoi(argv[3]);

	if (get_op_func(ops) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*ops == '/' && numb2 == 0) || (*ops == '%' && numb2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(ops)(numb1, numb2));

	return (0);
}
