#include "lists.h"

/**
 * main - The main program of our doubly-linked list calculator
 * @argc - The argument count
 * @argv - The argument vector
 *
 * Result: 0 (success), 1 (failure) if operator or argument count not valid.
 */
int main(int argc, char *argv[])
{
	char *number1, *number2, *op;
	dlistint_t *res;

	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s, first_number operator second_number\n",
			argv[0]);
		exit(EXIT_FAILURE);
	}

	number1 = argv[1];
	op = argv[2];
	number2 = argv[3];

	if (*op == '+' && !*(op + 1))
	{
		res = addi(number1, number2);
		print_dlistint(res);
		free_dlistint(res);
	}
	else
	{
		fprintf(stderr, "Please enter a valid operator: +, -, *, /\n");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
