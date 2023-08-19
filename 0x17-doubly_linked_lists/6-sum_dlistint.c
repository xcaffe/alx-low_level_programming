#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: head
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sumofdata;

	sumofdata = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sumofdata += head->n;
			head = head->next;
		}
	}
	return (sumofdata);
}

