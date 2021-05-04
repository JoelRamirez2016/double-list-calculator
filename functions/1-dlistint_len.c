#include "lists.h"

/**
 * dlistint_len - Returns the number of nodes a doubly linked list.
 * @h: The head of the list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t const *current = h;
	size_t num_nodes = 0;

	while (current)
	{
		num_nodes++;
		current = current->next;
	}

	return (num_nodes);
}
