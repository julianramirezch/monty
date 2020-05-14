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
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
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
	dprintf(2, "L%i: unknown instruction %s\n", l_n, vari.cm);
	free(vari.line);
	free_list(*vari.head);
	fclose(vari.fd);
	exit(EXIT_FAILURE);
	return (1);
}
