#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index on a doubly
 *                            linked list.
 * @head: The head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if success. Otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int idx = 0;

	if (!head || !*head) /* On head or *head NULL */
		return (-1);

	if (index == 0) /* When index is 0 */
	{
		if ((*head)->next) /* If there's more than one node */
		{
			*head = current->next;
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
		/* When only the last node */
		free(*head);
		*head = NULL;
		return (1);
	}

	while (current->next) /* When index not 0 */
	{
		if (idx == index)
		{
			(current->next)->prev = current->prev;
			(current->prev)->next = current->next;
			free(current);
			return (1);
		}
		idx++, current = current->next;
	}
	if (index == idx) /* When index is the last node */
	{
		(current->prev)->next = NULL;
		free(current);
		return (1);
	}

	return (-1);
}
