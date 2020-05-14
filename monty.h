#ifndef MONTY_H
#define MONTY_H

/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*STRUCTS*/

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct var - global structure for monty project
 * @fd: Stream
 * @line: line from script
 * @line_number: line number of script
 * @len: len of line
 * @cm: Command
 * @number: Number push
 * @status: Exit status
 * @head: Double pointer to struct
 */
typedef struct var
{
	FILE *fd;
	char *line;
	unsigned int line_number;
	size_t len;
	char *cm;
	int number;
	int status;
	stack_t **head;
} st_va;

/* GLOBAL */
extern st_va vari;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/*FUNCTIONS*/
int principal(stack_t **head);
int tokens(void);
int check_number(char *number);
int get_func(void);
void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);

/*LIST FUNCTIONS*/
void free_list(stack_t *head);

#endif
