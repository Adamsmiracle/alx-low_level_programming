#inlcude "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of the linked list
 * Return: Nothing
 */

void free_listint(const listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
