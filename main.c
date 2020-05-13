#include "monty.h"

/**
 * main - Entry Point
 * @ac: argc
 * @av: argv
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	int pri;
	ssize_t chars;
	stack_t *head = NULL;
	st_va var;

	var.len = 0, var.line = NULL, var.line_number = 1, var.fd = NULL;
	var.number = 0, var.status = 0;

	if (ac != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	var.fd = fopen(av[1], "r");
	if (var.fd == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	while ((chars = getline(&var.line, &var.len, var.fd)) != -1)
	{
		pri = principal(&var, &head);
		if (pri == 1)
		{
			free(var.line);
			free_list(head);
			fclose(var.fd);
			exit(EXIT_FAILURE);
		}
		var.line_number++;
	}
	free(var.line);
	free_list(head);
	fclose(var.fd);
	return (0);
}
