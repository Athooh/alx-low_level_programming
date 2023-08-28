#include "lists.h"

/**
 * print_listint - it prints the elements of linked list
 * @h: the linked list of type listint_t to print
 *
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
