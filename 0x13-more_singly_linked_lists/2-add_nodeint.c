#include "lists.h"

/**
 * add_nodeint - it adds new node at the beginning of linked list
 * @head: the pointer to the first node in list
 * @n: data to insert in the new node
 *
 * Return: returns the pointer to the new node, or NULL if unsuccesful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
