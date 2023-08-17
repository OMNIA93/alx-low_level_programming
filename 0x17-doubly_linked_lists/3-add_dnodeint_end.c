#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a dlistint_t list.
 * @head: Arg 1.
 * @n: arg 2.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*node, *hd = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node || !head)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (!*head)
		*head = node;
	else
	{
		while (hd->next)
			hd = hd->next;
		node->prev = hd;
		hd->next = node;
	}
	return (node);
}
