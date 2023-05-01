#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: first node
 * @index: index of the node
 * Return: returns the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *temp = head;

	while (temp && b < index)
	{
		temp = temp->next;
		b++;
	}
	return (temp ? temp : NULL);
}
