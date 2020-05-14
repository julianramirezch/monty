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
	int len;
	(void) line_number;

	aux = *stack;
	len = dlistint_len(aux);
	if (len < 2)
		return;

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
