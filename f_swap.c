#include "monty.h"

/**
 * swap -  swaps the top two elements of the stack.
 * @stack: Pointer to struct
 * @line_number: Line number
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int l_n = line_number;
	int len = 0;
	int copy;

	aux = *stack;
	len = dlistint_len(aux);
	if (len < 2)
	{
		dprintf(2, "L%i: can't swap, stack too short\n", l_n);
		free(vari.line);
		free_list(*vari.head);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	copy = aux->n;
	aux->n = aux->next->n;
	aux->next->n = copy;
}

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to struct
 * Return: # elements
 */

size_t dlistint_len(const stack_t *h)
{
	const stack_t *aux;
	int cont = 0;

	if (!h)
		return (0);

	aux = h;
	while (aux)
	{
		aux = aux->next;
		cont++;
	}

	return (cont);
}
