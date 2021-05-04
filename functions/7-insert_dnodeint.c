#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given index on a doubly
 *                            linked list.
 * @h: The head of the list.
 * @idx: The index of the node to be deleted.
 * @n: The content of the new node.
 *
 * Return: The address of the new node. Otherwise NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int index = 0;

	if (!h || (!*h && idx != 0)) /* Index can't be 0 when head NULL */
		return (NULL);

	if (idx == 0) /* When index is 0 */
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	while (current->next || index == idx) /* When index not 0 */
	{
		if (index == idx)
		{
			/* Connecting new_node's previous pointers */
			current->prev->next = new_node;
			new_node->prev = current->prev;
			/* Connecting new_node's next pointers */
			new_node->next = current;
			current->prev = new_node;

			return (new_node);
		}
		index++, current = current->next;
	}
	if (index + 1 == idx) /* When index is after the last node */
	{
		new_node->next = NULL;

		current->next = new_node;
		new_node->prev = current;

		return (new_node);
	}
	free(new_node);
	return (NULL);
}
