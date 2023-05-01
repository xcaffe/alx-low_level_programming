#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
