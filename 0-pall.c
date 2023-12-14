#include "main.h"

/**
 * ml_pall - prints all the values on the stack
 * @apex: stack
 * @count: line_number
 * Return: nil
 */

void ml_pall(stack_t **apex, unsigned int count)
{
	stack_t *x;
	(void)count;

	x = *apex;
	if (x == NULL)
		return (nil);
	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
	}
}
