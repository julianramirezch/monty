#include "monty.h"

/**
 * free_list -  function that free a list
 * @head: Pointer to struct
 */

void free_list(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (aux)
	{
		head = head->next;
		free(aux);
		aux = head;
	}
}
