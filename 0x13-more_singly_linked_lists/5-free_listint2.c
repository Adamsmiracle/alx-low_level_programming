#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: the list to free
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		temp = (*head)->next;
		free(head);
		*head = temp;
	}

	*head = NULL;
}
