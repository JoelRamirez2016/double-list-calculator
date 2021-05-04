#include "lists.h"

/**
 * addi - Adds two (non-negative) integers.
 * @num1: First term.
 * @num2: Second term.
 *
 * Result: The final sum.
 */
dlistint_t *addi(char *num1, char *num2)
{
	dlistint_t *n1, *n2, *d_n1, *d_n2, *res;
	short carry, sum, vn1, vn2;

	n1 = create_num(num1);
	n2 = create_num(num2);
	res = NULL;
	carry = sum = 0;

	d_n1 = get_dnodeint_at_index(n1, dlistint_len(n1) - 1);
	d_n2 = get_dnodeint_at_index(n2, dlistint_len(n2) - 1);

	while (d_n1 || d_n2)
	{
		vn1 = d_n1 ? d_n1->n : 0;
		vn2 = d_n2 ? d_n2->n : 0;
		sum = (vn1 + vn2 + carry) % 10;
		carry = (vn1 + vn2 + carry) / 10;

		add_dnodeint(&res, sum);
		if (d_n1)
			d_n1 = d_n1->prev;
		if (d_n2)
			d_n2 = d_n2->prev;
	}
	if (carry)
		add_dnodeint(&res, carry);

	free_dlistint(n1);
	free_dlistint(n2);
	return (res);
}

/* dlistint_t *subt(char *num1, char *num2); */
/* dlistint_t *mult(char *num1, char *num2); */
/* dlistint_t *divi(char *num1, char *num2); */
