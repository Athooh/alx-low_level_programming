#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - it duplicates to a new memory space location
 * @str: character viariable
 * Return: if successful it returns 0
 */

char *_strdup(char *str)
{
	char *z;
	int x, y = 0;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	z = malloc(sizeof(char) * (x + 1));

	if (z == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		z[y] = str[y];

	return (z);
}
