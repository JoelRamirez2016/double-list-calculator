#ifndef _LISTS_
#define _LISTS_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: digit
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	short n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

dlistint_t *create_num(char *number);

/* Operations */
dlistint_t *addi(char *num1, char *num2);
dlistint_t *subt(char *num1, char *num2);
dlistint_t *mult(char *num1, char *num2);
dlistint_t *divi(char *num1, char *num2);

#endif
