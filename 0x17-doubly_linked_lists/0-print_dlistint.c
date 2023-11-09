#include "lists.h"
/**
 * print_dlistint - prints the elements of a listint list
 * @h: head to the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int num;

	num = 0;

	while (h != NULL)
	{
		num += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
