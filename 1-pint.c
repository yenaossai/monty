#include "monty.h"

/**
 * ml_pint - prints the value at the top of the stack
 * @apex: stack
 * @count: line number
 * Return: nil
 */

void ml_pint(stack_t **apex, unsigned int count)
{
	if (*apex == NULL)
	{
		fprintf(stderr, "L<line_number>: can't pint, stack empty\n", count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*apex)->n);
}
