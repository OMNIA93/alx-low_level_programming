#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @index: the index of the node, starting from 0
 * @head: head node
 * Return: the nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	while (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
