#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @var: Global structure
 */

void push(st_va *var)
{
	/* add_dnodeint(var->head, var->number, var);*/
	stack_t *newn, *aux;

	newn = malloc(sizeof(stack_t));
	if (newn == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		var->status = -1;
		free(newn);
		return;
	}
	newn->n = var->number;
	newn->prev = NULL;
	newn->next = NULL;

	if (*var->head == NULL)
	{
		*var->head = newn;
		(*var->head)->next = NULL;
		(*var->head)->prev = NULL;
		return;
	}

	aux = *var->head;
	newn->next = aux;
	aux->prev = newn;
	*var->head = newn;
}
