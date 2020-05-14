#include "monty.h"

/**
 * pint -  prints top the stack
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int l_n = line_number;

	if (!stack)
	{
		dprintf(STDERR_FILENO, "L%i: can't pint, stack empty", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	if (aux)
		printf("%i\n", aux->n);
}
