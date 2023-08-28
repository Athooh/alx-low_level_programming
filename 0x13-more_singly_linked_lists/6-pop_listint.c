#include "lists.h"

/**
 * pop_listint - it deletes the node head of linked list
 * @head: the pointer to the first element in linked list
 *
 * Return: returns the data inside the elements that was deleted,
 * or returns 0 if the list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numb);
}
