#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this is the main entry
 * @x: input of type int
 * @y: its a double pointer array
 * Return: if successful return 0
 */

char *argstostr(int x, char **y)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (x == 0 || y == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
	{
		for (n = 0; y[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
	{
		for (n = 0; y[i][n]; n++)
		{
			str[r] = y[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
