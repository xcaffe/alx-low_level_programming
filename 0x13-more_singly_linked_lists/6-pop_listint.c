#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the head node’s data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int b;

	if (!head || !*head)
		return (0);
	b = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (b);
}
