#include "monty.h"

/**
 * principal - Function principal of the project
 * @var: Global struct
 * @head: Pointer to head struct stack_s
 * Return: 0 on succes, 1 in failure
 */

int principal(st_va *var, stack_t **head)
{
	int token;
	int get;

	var->head = head;
	token = tokens(var);
	if (token != 1)
		get = get_func(var);
	else
		return (1);

	if (get == 1)
		return (-1);

	return (0);
}
