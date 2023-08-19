#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: points to head
 * @index: index of the node to search for, starting from 0
 * Return: null or node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nthsize;
	dlistint_t *temp;

	nthsize = 0;
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (index == nthsize)
			return (temp);
		nthsize++;
		temp = temp->next;
	}
	return (NULL);
}
