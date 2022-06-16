#include "monty.h"
/**
 * _push - insert int into a stack
 * @stack: linked list node for stack
 * @line_number: current line of opcode
 *
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	char *arg;
	int pust_arg;


	new_node = malloc(sizeof(stack_t);

	if (!new_node)
	{
		printf("Error: malloc failed\n");
		exit_status(stack);
	}

	arg = strtok(NULL, \n);

	if (isnum(arg) == 1 && arg != NULL)
	{
		push_arg = atoi(arg);
	}
	else
	{
		printf("%iL: usage: push integer", line_number);
		exit_status(stack);
	}

	push_arg = 0;

	if (sq_flag == 1)
	{
		add_dnodeint_end(stack, push_arg);
	}

	if (sq_flag == 0)
	{
		add_dnodeint(stack, push_arg);
	}
}

/**
 * _pall - print all the stack value
 * @stack: linked list head pointer for stack
 * @line_number: current line of opcode
 */

void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
