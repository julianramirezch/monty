#include "monty.h"

/**
 * rotr -  rotates the stack to the bottom.
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int last;
	int len;
	(void) line_number;

	aux = *stack;
	len = dlistint_len(aux);
	if (len < 2)
		return;

	while (aux)
	{
		if (aux->next == NULL)
		{
			last = aux->n;
			break;
		}
		aux = aux->next;
	}

	while (aux)
	{
		if (aux->prev != NULL)
			aux->n = aux->prev->n;
		else
			aux->n = last;
		aux = aux->prev;
	}
}
