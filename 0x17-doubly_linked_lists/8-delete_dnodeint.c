#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: dlinked list head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *previous, *next;
	unsigned int i;

	if (!*head)
		return (-1);

	for (i = 0; i < index && current; i++)
		current = current->next;

	if (!current)
		return (-1);

	previous = current->prev;
	next = current->next;
	if (previous)
		previous->next = next;
	if (next)
		next->prev = previous;
	if (current == *head)
		*head = next;
	free(current);
	return (1);
}
