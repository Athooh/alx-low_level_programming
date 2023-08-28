#include "lists.h"

/**
 * free_listint_safe - it frees a linked list
 * @h: the pointer to first node in linked list
 *
 * Return: returns the number of elements in list freed 
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int x_diff;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x_diff = *h - (*h)->next;
		if (x_diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
