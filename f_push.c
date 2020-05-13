#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newn;
	(void)line_number;

	newn = malloc(sizeof(stack_t));
	if (newn == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		vari.status = -1;
		return;
	}
	newn->n = vari.number;
	newn->prev = NULL;

	if (*stack == NULL)
		newn->next = NULL;
	else
		newn->next = *stack;

	if (newn->next != NULL)
		newn->next->prev = newn;

	*stack = newn;
}
