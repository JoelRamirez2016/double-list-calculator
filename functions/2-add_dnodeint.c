#include "lists.h"

/**
 * add_dnodeint - Adds a node at the beginning of a doubly linked list.
 * @head: The head of the list.
 * @n: The content of the new node.
 *
 * Return: The address of the new node. Otherwise, NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (head && *head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
		new_node->next = NULL;

	*head = new_node;

	return (new_node);
}
