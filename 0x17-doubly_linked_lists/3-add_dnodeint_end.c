#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head
 * @n: value
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *addnew;

	addnew = malloc(sizeof(dlistint_t));
	if (addnew == NULL)
		return (NULL);
	addnew->n = n;
	addnew->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = addnew;
	}
	else
	{
		*head = addnew;
	}
	addnew->prev = h;
	return (addnew);
}
