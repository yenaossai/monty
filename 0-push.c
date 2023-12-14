#include "monty.h"

/**
 * ml_push - pushes an element to the stack
 * @apex: stack
 * @count: line_number
 * Return: nil
 */

void ml_push(stack_t **apex, unsigned int count)
{
	int u, k = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprint(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*apex);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*apex);
		exit(EXIT_FAILURE);
	}
	u = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(apex, u);
	else
		addqueue(apex, u);
}
