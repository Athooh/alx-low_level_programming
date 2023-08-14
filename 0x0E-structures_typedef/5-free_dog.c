#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it frees the memory allocated for a struct dog
 * @x: the struct dog to be freed
 */

void free_dog(dog_t *x)
{
	if (x)
	{
		free(x->name);
		free(x->owner);
		free(x);
	}
}
