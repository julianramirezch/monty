#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @var: Global structure
 */

void push(st_va *var)
{
	/* add_dnodeint(var->head, var->number, var);*/
	stack_t *newn;

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

	if (*var->head == NULL)
		newn->next = NULL;
	else
		newn->next = *var->head;

	if (newn->next != NULL)
		newn->next->prev = newn;

	*var->head = newn;
}
