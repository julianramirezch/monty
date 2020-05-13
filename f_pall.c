#include "monty.h"

/**
 * pall -  prints all the values on the stack
 * @var: Globar Structure
 */

void pall(st_va *var)
{
	stack_t *aux;

	aux = *var->head;
	while (aux)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
	}
}
