#include "monty.h"

/**
 * tokens - Function tokens
 * @var: Global struct
 * Return: 0 on succes., 1 on failure
 */

int tokens(st_va *var)
{
	char *num = NULL;
	int l_n = var->line_number, check;

	if (var->line == NULL || var->line[0] == '\n')
		return (1);

	var->cm = strtok(var->line, del);
	if (var->cm == NULL || var->cm[0] == '#')
		return (1);

	if (strcmp(var->cm, "push") == 0)
	{
		num = strtok(NULL, del);
		check = check_number(num);
		if (num == NULL || check == 1)
		{
			dprintf(STDOUT_FILENO, "L%i: usage: push integer\n", l_n);
			return (-1);
		}
		var->number = atoi(num);
	}

	return (0);
}
