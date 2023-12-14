#include "main.h"

/**
 * ml_pall - prints all the values on the stack
 * @apex: stack
 * @count: line number
 * Return: nil
 */

void ml_pall(stack_t **apex, unsigned int count)
{
	stack_t *x;

	x = *apex;
	if (x == NULL)
		return (nil);
	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
	}
}
