#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: head of the linked list
 * @n: the data to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	if (last == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;
	new_node->prev = last;
	last->next = new_node;

	return (new_node);
}
