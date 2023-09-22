#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds node to the linked list
 * @head: head of the list
 * @str: the data of the nde
 *
 * Return: The address of the new element
 */
size_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
