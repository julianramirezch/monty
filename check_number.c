#include "monty.h"

/**
 * check_number - Function check if argumen is valid
 * @number: token String
 * Return: 0 on succes, 1 in failure
 */

int check_number(char *number)
{
	int i;

	for (i = 0; number[i]; i++)
	{
		if (number[i] == '-' && i == 0)
		{
			if (number[i + 1] >= '0' && number[i + 1] <= '9')
				continue;
			else
				return (1);
		}
		if (!(number[i] >= '0' && number[i] <= '9'))
			return (1);
	}
	return (0);
}
