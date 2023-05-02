#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *fay = *head;
	listint_t *cay = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(fay);
		return (1);
	}

	while (a < index - 1)
	{
		if (!fay || !(fay->next))
			return (-1);
		fay = fay->next;
		a++;
	}

	cay = fay->next;
	fay->next = cay->next;
	free(cay);
	return (1);
}

