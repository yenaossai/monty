#include "monty.h"

/**
 * ml_pint - prints the value at the top of the stack
 * @apex: stack
 * @count: line_number
 * Return: nil
 */

void ml_pint(stack_t **apex, unsigned int count)
{
	if (*apex == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*apex);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*apex)->n);
}
