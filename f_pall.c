#include "monty.h"

/**
 * pall -  prints all the values on the stack
 * @var: Globar Structure
 */

void pall(st_va *var)
{
	print_dlistint(*var->head);
}

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Const struct pointer
 * Return: 0 if no elements , i is number of elements
 */

size_t print_dlistint(const stack_t *h)
{
	const stack_t *aux;
	int i = 0;

	if (!h)
		return (0);

	aux = h;
	while (aux)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
		i++;
	}

	return (i);
}
