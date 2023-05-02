#include "lists.h"
/**
 * sum_listint - the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int a = 0;
	listint_t *temp = head;

	while (temp)
	{
		a += temp->n;
		temp = temp->next;
	}
	return (a);
}
