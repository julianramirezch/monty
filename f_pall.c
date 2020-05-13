#include "monty.h"

/**
 * pall -  prints all the values on the stack
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	(void) line_number;

	aux = *stack;
	while (aux)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
	}
}
