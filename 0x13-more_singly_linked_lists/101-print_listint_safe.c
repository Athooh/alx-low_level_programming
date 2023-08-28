#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - it counts number of unique nodes
 * in a looped linked listint_t list.
 * @head: The pointer to the head of listint_t to check.
 *
 * Return: returns  0 If list not looped
 * Otherwise - return number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *rabbit, *cat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	rabbit = head->next;
	cat = (head->next)->next;

	while (cat)
	{
		if (rabbit == cat)
		{
			rabbit = head;
			while (rabbit != cat)
			{
				nodes++;
				rabbit = rabbit->next;
				cat = cat->next;
			}

			rabbit = rabbit->next;
			while (rabbit != cat)
			{
				nodes++;
				rabbit = rabbit->next;
			}

			return (nodes);
		}

		rabbit = rabbit->next;
		cat = (cat->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - it prints a listint_t list safely.
 * @head: the pointer to the head of listint_t list.
 *
 * Return: returns the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
