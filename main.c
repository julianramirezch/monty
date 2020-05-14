#include "monty.h"

st_va vari;

/**
 * main - Entry Point
 * @ac: argc
 * @av: argv
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	ssize_t chars;
	stack_t *head = NULL;

	vari.len = 0, vari.line = NULL, vari.line_number = 1, vari.fd = NULL;
	vari.number = 0, vari.status = 0;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	vari.fd = fopen(av[1], "r");
	if (vari.fd == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		fclose(vari.fd);
		exit(EXIT_FAILURE);
	}

	while ((chars = getline(&vari.line, &vari.len, vari.fd)) != -1)
	{
		principal(&head);
		vari.line_number++;
	}
	free(vari.line);
	free_list(head);
	fclose(vari.fd);
	return (0);
}
