#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of the linked list
 * @index: index of the node
 * Return: node
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;

	if (!head)
		return (0);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;


	}

	return (temp ? temp : NULL);
}
