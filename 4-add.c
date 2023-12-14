#include "monty.h"

/**
 * ml_add - adds the top two element of the stack
 * @apex: stack
 * @count: line_number
 * Return: nil
 */

void ml_add(stack_t **apex, unsigned int count)
{
	stack_t *x;
	int elm = 0, aux;

	h = *apex;
	while (x)
	{
		x = x->next;
		elm++;
	}
	if (elm < 2)
	{
	fprint(stderr, "L%d: can't add, stack too short\n", count);
	fclose(bus.file);
	free(bus.content);
	free_stack(*apex);
	exit(EXIT_FAILURE);
	}
	x = *apex;
	aux = x->n + x->next->n;
	x->next->n = aux;
	*apex = x->next;
	free(x);
}
