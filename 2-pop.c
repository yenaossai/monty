#include "monty.h"

/**
 * ml_pop - removes the top element of the stack
 * @apex: stack
 * @count: line number
 * Return: nil
 */

void ml_pop(stack_t **apex, unsigned int count)
{
	stack_t *x;

	if (*apex == NULL)
	{
		fprintf(stderr, "L<line_number>: can't pop an empty stack\n", count);
		exit(EXIT_FAILURE);
	}
	x = *apex;
	*apex = x->next;
	free(x);
}
