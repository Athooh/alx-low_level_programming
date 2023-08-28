#include "lists.h"

/**
 * listint_len - it returns number of elements in linked lists
 * @h: the linked list of type listint_t traversed
 *
 * Return: returns number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
