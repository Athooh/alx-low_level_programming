#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the basic information for the dog
 * @name: First attribute
 * @age: Second attribute
 * @owner: Third attribute
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - type definition for the struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *x, char *name, float age, char *owner);
void print_dog(struct dog *x);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *x);
char *_strcpy(char *dest, char *src);
int _strlen(char *x);

#endif
