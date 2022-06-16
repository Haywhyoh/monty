#include "monty.h"
/**
 * free_dlist - free the double linked list
 * @stack: the head of the double linked list
 *
 */
void free_dlist(stact_t *stack)
{
	*temp = stack;

	while (stack != NULL)
	{
		temp = stack->next
		free(stack);
		stack = temp;
	}
}

/**
 * add_dnodeint - add a node to the beginnig of a stack
 * @head: the doulbly linked list head
 * @n: the integer value n
 *
 * Return: the head pointer
 */

stack_t add_dnodeint(stack_t **head, const int n)
{
	new_node = malloc(sizeof(stack_t);

	if (!new_node)
		return (NULL);
	if (*head == NULL)
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

/**
 * add_dnodeint_end - add node at the end
 * @head: the head pointer of the linked list
 * @n: integer value to be added to list
 *
 * Return: the pointer to the new_node
 */
stack_t *add_dnodeint_end(stack_t **head, const int n)
{
	stack_t *tmp = *head;
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new_node;
	new_node->prev = tmp;
	new_node->next = NULL;
	return (new_node);
}
