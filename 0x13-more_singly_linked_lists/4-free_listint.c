#include "lists.h"

/**
 * free_listint - it frees the linked list
 * @head: the listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
