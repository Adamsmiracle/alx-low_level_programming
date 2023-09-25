#include "lists.h"

/**
 * print_listint - prints all the elements of a list list
 * @h: The head of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		num++;
		printf("%d \n", h->n);
		h = h->next;
	}
	return (num);
}
