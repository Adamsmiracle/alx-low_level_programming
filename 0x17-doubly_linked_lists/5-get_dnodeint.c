#include "lists.h"
/**
 * get_dnodeint_at_index - gets  the node at a specific index
 * @head: head of the linked list
 * @index: index of the node
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
