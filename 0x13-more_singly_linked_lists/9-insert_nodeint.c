#include "lists.h"

/**
 * insert_nodeint_at_index - it inserts new node in linked list,
 * at a given position
 * @head: the pointer to the first node in list
 * @idx: the index the new node is added
 * @n: the data inserted in the new node
 *
 * Return: returns pointer to the new node, or NULL if unsuccesful
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			nw->next = tmp->next;
			tmp->next = nw;
			return (nw);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
