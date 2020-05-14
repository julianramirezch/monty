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
