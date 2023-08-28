#include "lists.h"

/**
 * reverse_listint - it reverses the linked list
 * @head: the pointer to the first node in list
 *
 * Return: returns pointer to first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
 	listint_t *pre = NULL;
	listint_t *nxt = NULL;

	while (*head)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = pre;
		pre = *head;
		*head = nxt;
	}

	*head = pre;

	return (*head);
}
