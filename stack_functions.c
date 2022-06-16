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


	new_node = malloc(sizeof(stack_t);

	if (!new_node)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	arg = strtok(NULL, \n);
	if(isnum(arg) == 1 && arg != NULL)
	{
		push_arg = atoi(arg);
	}
	
}
