#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of size int size and assign  to character c
 * @size: it the size of an array
 * @c: character to assign
 * Description: creates an array of size int size and assign to character c
 * Return: its a pointer to array and returns NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str  == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
