#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: head to the list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}

