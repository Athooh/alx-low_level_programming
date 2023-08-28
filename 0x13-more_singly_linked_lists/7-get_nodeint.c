#include "lists.h"

/**
 * get_nodeint_at_index - it returns the node at certain index in linked list
 * @head: the first node in linked list
 * @index: the index of node to return
 *
 * Return: returns the pointer to the node looked for, or NULL if unsuccesful
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp = head;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}

	return (tmp ? tmp : NULL);
}
