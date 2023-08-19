#include "lists.h"
/**
 * dlistint_t - returns the number of element
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int numnode;

	numnode = 0;

	if (h == NULL)
		return (numnode);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		numnode++;
		h = h->next;
	}
	return (numnode);
}
