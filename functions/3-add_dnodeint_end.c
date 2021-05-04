#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list.
 * @head: The head of the list.
 * @n: The content of the new node.
 *
 * Return: The address of the new node. Otherwise, NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (head && *head)
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;

		new_node->prev = last_node;
		last_node->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
