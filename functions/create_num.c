#include "lists.h"

dlistint_t *create_num(char *number)
{
	dlistint_t *head;
	int i;

	head = NULL;

	for (i = 0; number[i]; i++)
	{
		if (number[i] <= '0' && number[i] >= '9')
		{
			free_dlistint(head);
			return (NULL);
		}
		add_dnodeint_end(&head, number[i] - '0');
	}

	return (head);
}
