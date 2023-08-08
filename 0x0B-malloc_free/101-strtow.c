#include <stdlib.h>
#include "main.h"

/**
 * count_word - this is a helper function to count the number of words in a string
 * @y: a string to be evaluated
 * Return: returns the number of words
 */

int count_word(char *y)
{
	int flag, c, i;

	flag = 0;
	i = 0;

	for (c = 0; y[c] != '\0'; c++)
	{
		if (y[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			i++;
		}
	}
	return (i);
}

/**
 * **strtow - it splits a string into words
 * @str: this is the string to be split
 * Return: it returns a pointer to an array of strings if Successful
 * or NULL if not
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, l = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (c)
			{
				end = j;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[l] = tmp - c;
				l++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = j;
	}
	matrix[k] = NULL;
	return (matrix);
}
