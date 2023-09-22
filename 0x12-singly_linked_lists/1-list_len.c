#include "lists.h"
#include <stdlib.h>
/**
 * list_len - prints the len the list
 * @h: head node of the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
