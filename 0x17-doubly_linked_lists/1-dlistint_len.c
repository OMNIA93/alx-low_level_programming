# include "lists.h"

/**
 *dlistint_len - function that return the number of elments.
 *@h: head node
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
} 
