#include "monty.h"

/**
 * pall -  prints all the values on the stack
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	stack_t *aux;

	aux = *stack;
	while (aux)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
	}
}
