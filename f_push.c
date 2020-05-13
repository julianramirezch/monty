#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @var: Global structure
 */

void push(st_va *var)
{
	add_dnodeint(var->head, var->number);
}

/**
 * add_dnodeint - adds a newnode at the beginning of a dlistint_t list.
 * @head: Pointer to struct
 * @n: Integer
 * Return: New Node
 */

stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *newn, *aux;

	newn = malloc(sizeof(stack_t));
	if (newn == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		return (free(newn), NULL);
	}
	newn->n = n;
	newn->prev = NULL;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}

	aux = *head;
	newn->next = aux;
	aux->prev = newn;
	*head = newn;

	return (newn);
}
