#include "monty.h"

/**
 * add -  adds the top two elements of the stack.
 * @stack: Pointer to struct
 * @line_number: Line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int l_n = line_number;
	int len = 0;
	int res;

	aux = *stack;
	len = dlistint_len(aux);
	if (len < 2)
	{
		dprintf(2, "L%i: can't add, stack too short\n", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	res = (aux->n) + (aux->next->n);
	(*stack)->next->n = res;
	pop(stack, line_number);
}
