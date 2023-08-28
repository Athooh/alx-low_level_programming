#include "lists.h"

/**
 * delete_nodeint_at_index - it deletes a node in linked list at certain index
 * @head: the pointer of first element in the list
 * @index: the index of the node to delete
 *
 * Return: returns 1 a Success, or -1 unsuccesful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		x++;
	}


	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
