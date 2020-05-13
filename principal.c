#include "monty.h"

/**
 * principal - Function principal of the project
 * @head: Pointer to head struct stack_s
 * Return: 0 on succes, -1 in failure
 */

int principal(stack_t **head)
{
	int token;
	int get;

	vari.head = head;
	token = tokens();
	if (token == 0)
	{
		get = get_func();
		if (get == -1)
			return (-1);
	}

	if (token == 1)
		return (1);

	if (token == -1)
	{
		return (-1);
	}

	return (0);
}
