#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - it adds new node to the beginning of linked list
 * @head: the double pointer to list_t list
 * @str: the string (new) added in the node
 *
 * Return: returns address of new element, NULL if unsuccesfull
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
