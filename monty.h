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

/* GLOBAL */
#define del " \t\n\r"

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

/**********************************************************************/

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

/**********************************************************************/

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
	void (*f)(st_va *var);
} instruction_t;

/**********************************************************************/

/*FUNCTIONS*/
int principal(st_va *var, stack_t **head);
int tokens(st_va *var);
int get_func(st_va *var);
int check_number(char *number);
void add(st_va *var);
void nop(st_va *var);
void pall(st_va *var);
void pint(st_va *var);
void pop(st_va *var);
void push(st_va *var);
void swap(st_va *var);
void stack(st_va *var);
void queue(st_va *var);

/*LIST FUNCTIONS*/
void free_list(stack_t *head);
size_t print_dlistint(const stack_t *h);
size_t dlistint_len(const stack_t *h);
stack_t *add_dnodeint(stack_t **head, const int n, st_va *var);
stack_t *add_dnodeint_end(stack_t **head, const int n);
stack_t *get_dnodeint_at_index(stack_t *head, unsigned int index);
int sum_dlistint(stack_t *head);
stack_t *insert_dnodeint_at_index(stack_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(stack_t **head, unsigned int index);


#endif
