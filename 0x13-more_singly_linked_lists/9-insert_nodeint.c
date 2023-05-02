#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *fay;
	listint_t *temp = *head;

	fay = malloc(sizeof(listint_t));
	if (!fay || !head)
		return (NULL);

	fay->n = n;
	fay->next = NULL;

	if (idx == 0)
	{
		fay->next = *head;
		*head = fay;
		return (fay);
	}
	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			fay->next = temp->next;
			temp->next = fay;
			return (fay);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}


