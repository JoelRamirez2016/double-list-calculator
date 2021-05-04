#include "lists.h"

/**
 * print_dlistint - Prints all the elements in a doubly linked list.
 * @h: The head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t const *current = h;
	size_t num_nodes = 0;

	while (current)
	{
		printf("%d", current->n);
		num_nodes++;
		current = current->next;
	}
	printf("\n");

	return (num_nodes);
}
