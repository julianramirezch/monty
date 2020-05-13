#include "monty.h"

/**
 * get_func - Find the function
 * @var: Global struct
 * Return: 0 on succes, -1 on failure
 */

int get_func(st_va *var)
{
	int i = 0;
	unsigned int l_n = var->line_number;

	instruction_t cmd[] = {
		{"pall", pall},
		{"push", push},
		{NULL, NULL}
	};

	while (cmd[i].opcode)
	{
		if (strcmp(var->cm, cmd[i].opcode) == 0)
		{
			cmd[i].f(var);
			return (0);
		}
		i++;
	}
	dprintf(STDOUT_FILENO, "L%i: unknown instruction %s\n", l_n, var->cm);
	return (1);
}
