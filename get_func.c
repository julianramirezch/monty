#include "monty.h"

/**
 * get_func - Find the function
 * Return: 0 on succes, -1 on failure
 */

int get_func(void)
{

	int i = 0;
	int l_n = vari.line_number;

	instruction_t cmd[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};

	while (cmd[i].opcode)
	{
		if (strcmp(vari.cm, cmd[i].opcode) == 0)
		{
			cmd[i].f(vari.head, vari.line_number);
			if (vari.status == -1)
				return (-1);
			else
				return (0);
		}
		i++;
	}
	dprintf(2, "L%i: unknown instruction %s\n", l_n, vari.cm);
	return (-1);
}
