#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list
 * Return: number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
