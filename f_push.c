#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newn, *aux;
	(void)line_number;

	newn = malloc(sizeof(stack_t));
	if (newn == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}
	newn->n = vari.number;
	newn->prev = NULL;
	newn->next = NULL;

	if (*stack == NULL)
	{
		*stack = newn;
		return;
	}

	aux = *stack;
	newn->next = aux;
	aux->prev = newn;
	*stack = newn;
}
