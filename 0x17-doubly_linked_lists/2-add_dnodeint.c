#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head of the list
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addnew;
	dlistint_t *h;

	addnew = malloc(sizeof(dlistint_t));
	if (addnew == NULL)
		return (NULL);
	addnew->n = n;
	addnew->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	addnew->next = h;
	if (h != NULL)
		h->prev = addnew;
	*head = addnew;
	return (addnew);
}
