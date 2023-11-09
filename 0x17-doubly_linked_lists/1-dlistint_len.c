#include "lists.h"
/**
 * dlistint_len - prints the len of linked list
 * @h: head of the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
