#include "lists.h"

/**
 * free_dlistint - frees adlist
 * @head: points to the current node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		free(node);
		head = head->next;
	}
}
