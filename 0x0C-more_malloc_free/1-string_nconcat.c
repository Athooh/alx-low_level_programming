#include <stdlib.h>
#include "main.h"

/**
 * *string_noncat - it adds n bytes of a string to another string
 * @x1: the string to append to
 * @x2: the string to add from
 * @i: the number of bytes from x1 to add to x2
 * Return: returns pointer to the resulting string
 */

char *string_nconcat(char *x1, char *x2, unsigned int i)
{
	char *x;
	unsigned int l = 0, j = 0, len1 = 0, len2 = 0;

	while (x1 && x2[len1])
		len1++;
	while (x2 && x2[len2])
		len2++;
	if (i < len2)
		s = malloc(sizeof(char) * (len1 + i + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);
	
	while (l < len1)
	{
		s[l] = s1[l];
		l++;
	}
	while (x < len2 && l < (len1 + x))
		s[l++] = s2[j++];

	while (x >= len2 && l < (len1 + len2))
		s[l++] = s2[j++];

	s[l] = '\0';

	return (s)
}
