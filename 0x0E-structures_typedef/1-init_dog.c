#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - it initializes the variable of type struct dog
 * @x: the pointer to struct dog initialized
 * @name: the name initialized
 * @age: the age initialized
 * @owner: the owner initialized
 */

void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x == NULL)
		x = malloc(sizeof(struct dog));
	x->name = name;
	x->age = age;
	x->owner = owner;
}
