#include "lists.h"

/**
 * get_dnodeint_at_index - Returns a node of a doubly linked list
 *                         at a given index.
 * @head: The head of the list.
 * @index: The index of the desired node to be returned.
 *
 * Return: The address of the index searched or NULL if non existent.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_at_idx = head;
	unsigned int idx = 0;

	while (node_at_idx)
	{
		if (index == idx)
			return (node_at_idx);
		node_at_idx = node_at_idx->next;
		idx++;
	}
	return (NULL);
}
