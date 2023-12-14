#include "monty.h"

/**
 * ml_swap - swaps the top two elements of the stack
 * @apex: stack
 * @count: line_number
 * Return: nil
 */

void ml_swap(stack_t **apex, unsigned int count);
{
	stack_t *x;
	int elm = 0, aux;

	x = *apex;
	while (x)
	{
		x = x->next;
		elm++;
	}
	if (elm < 2)
	{
		fprint(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*apex);
		exit(EXIT_FAILURE);
	}
	x = *apex;
	aux = x->n;
	x->n = x->next->n;
	x->next->n = aux;
}
