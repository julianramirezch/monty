#include "monty.h"

/**
 * pstr -  prints the string starting at the top
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	(void) line_number;

	if (*stack == NULL)
	{
		putchar('\n');
		return;
	}

	aux = *stack;
	while (aux)
	{
		if (aux->n > 0 && aux->n < 128)
			putchar(aux->n);
		else
			break;
		aux = aux->next;
	}
	putchar('\n');
}
