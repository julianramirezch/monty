#include "monty.h"

/**
 * div -   divides the second top element of the stack by the top
 * @stack: Pointer to struct
 * @line_number: Line number
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int l_n = line_number;
	int len = 0;
	int res;

	aux = *stack;
	len = dlistint_len(aux);
	if (len < 2)
	{
		dprintf(2, "L%i: can't div, stack too short\n", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	res = (aux->next->n) / (aux->n);
	(*stack)->next->n = res;
	pop(stack, line_number);
}
