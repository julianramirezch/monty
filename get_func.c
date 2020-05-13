#include "monty.h"

/**
 * get_func - Find the function
 * Return: 0 on succes, -1 on failure
 */

int get_func(void)
{

	int i = 0;
	unsigned int l_n = vari.line_number;

	instruction_t cmd[] = {
		{"pall", pall},
		{"push", push},
		{NULL, NULL}
	};

	while (cmd[i].opcode)
	{
		if (strcmp(vari.cm, cmd[i].opcode) == 0)
		{
			cmd[i].f(vari.head, vari.line_number);
			return (0);
		}
		i++;
	}
	dprintf(STDOUT_FILENO, "L%i: unknown instruction %s\n", l_n, vari.cm);
	return (-1);
}
