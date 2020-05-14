#include "monty.h"

/**
 * tokens - Function tokens
 * Return: 0 on succes., 1 on failure
 */

int tokens(void)
{
	char *num = NULL;
	int l_n = vari.line_number, check;

	if (vari.line == NULL || vari.line[0] == '\n')
		return (1);

	vari.cm = strtok(vari.line, " \t\n");
	if (vari.cm == NULL || vari.cm[0] == '#')
		return (1);

	if (strcmp(vari.cm, "push") == 0)
	{
		num = strtok(NULL, " \t\n");
		check = check_number(num);
		if (num == NULL || check == 1)
		{
			dprintf(2, "L%i: usage: push integer\n", l_n);
			return (-1);
		}
		vari.number = atoi(num);
	}

	return (0);
}
