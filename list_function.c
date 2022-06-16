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


