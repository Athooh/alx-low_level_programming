#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - it return string length
 * @x: evaluated string
 *
 * Return: returns the string legnth
 */

int _strlen(char *x)
{
	int y;

	y = 0;

	while (x[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * _strcpy - it copies the pointed string by src
 * including the terminated null byte (\0)
 * to buffer pointed to by dest
 * @src: the string copied
 * @dest: the pointer to the buffer in which we copy the string
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - a new dog created
 * @name; dog name
 * @age: dog age
 * @owner: dog owner
 * Return: returns dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

