#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of the linked list
 * @index: position to remove item
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    dlistint_t *current = *head;
    unsigned int i = 0;

    if (*head == NULL) {
        return -1;
    }

    if (index == 0) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return 1;
    }

    while (current != NULL && i < index) {
        current = current->next;
        i++;
    }

    if (current == NULL) {
        return -1;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);

    return 1;
}
