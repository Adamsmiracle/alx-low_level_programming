#include "lists.h"

/**
 * sum_listint - finds the sum of data in the list
 * @head: the head to the list
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
