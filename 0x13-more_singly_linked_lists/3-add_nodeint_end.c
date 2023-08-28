#include "lists.h"

/**
 * add_nodeint_end - it adds node at the end of linked list
 * @head: the pointer to the first element in a list
 * @n: data to insert in the new element
 *
 * Return: returns the pointer to the new node, or NULL if unsuccesful
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nw;

	return (nw);
}
