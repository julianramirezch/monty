#include "monty.h"

/**
 * pop -  removes the top element of the stack.
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int l_n = line_number;

	if (*stack == NULL)
	{
		dprintf(2, "L%i: can't pop an empty stack\n", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}
	aux = *stack;

	*stack = aux->next;
	if (aux->next != NULL)
		aux->next->prev = NULL;
	free(aux);
}
