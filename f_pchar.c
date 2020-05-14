#include "monty.h"

/**
 * pchar -  prints the char at the top of the stack
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int l_n = line_number;

	if (*stack == NULL)
	{
		dprintf(2, "L%i: can't pchar, stack empty\n", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	if (!(aux->n >= 65 && aux->n <= 90))
	{
		dprintf(2, "L%i: can't pchar, value out of range\n", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}
	if (!(aux->n >= 97 && aux->n <= 122))
	{
		dprintf(2, "L%i: can't pchar, value out of range\n", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", aux->n);
}
