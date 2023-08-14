#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - it prints the dog struct
 * @x: the struct dog to be printed
 */

void print_dog(struct dog *x)
{
	if (x == NULL)
		return;

	if (x->name == NULL)
		x->name = "(nil)";
	if (x->owner == NULL)
		x->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", x->name, x->age, x->owner);
}
