#include "lists.h"

/**
 * sum_listint - it calculates sum of all data in a listint_t list
 * @head: the first node in linked list
 *
 * Return: returns resulting sum
 */

int sum_listint(listint_t *head)
{
	int sm = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sm += tmp->n;
		tmp = tmp->next;
	}

	return (sm);
}
