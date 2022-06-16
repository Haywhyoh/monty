#include "monty.h"
/** freed_list - free the double linked list
 * @stack - double linked list to be free
 *
 */
void freed_list(stact_t *stack)
{
	*temp = stack;

	while (stack != NULL)
	{
		temp = stack->next
		free(stack);
		stack = temp;
	}
}

stack_t add_dnodeint(stack_t **head, const int n)
{
	new_node = malloc(sizeof(stack_t);
	
	if (!new_node)
		return (NULL);
	if (*head = NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	(*head)->prev = new_node;
	new_node->n = n
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
