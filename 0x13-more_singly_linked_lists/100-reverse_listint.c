#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *first = NULL;

	while (*head)
	{
		first = (*head)->first;
		(*head)->first = last;
		last = *head;
		*head = first;
	}
	*head = last;
	return (*head);
}

