#include "monty.h"

/**
 * rotl -  rotates the stack to the top.
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int top;
	(void) line_number;

	aux = *stack;
	top = aux->n;
	while (aux)
	{
		if (aux->next != NULL)
			aux->n = aux->next->n;
		else
			aux->n = top;
		aux = aux->next;
	}
}
