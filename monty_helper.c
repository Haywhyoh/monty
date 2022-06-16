#include "monty.h"
/**
 * exit_status - exit code if failed
 * @stack: stack to be freed
 *
 * Return: exit status
 */
void exit_status(stack_t **stack)
{
	if (*stack)
		free_dlist(*stack);
	exit(EXIT_FAILURE);
}

/**
 * _isnum - crheck if the input is a number
 * @str: the string value to be checked
 *
 * Return: return 1 if string is a number and 0 if not number
 */
int _isnum(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);

	while (string[i])
	{
		if (str[0] == '-')
		{
			i++;
			continue
		}
		if (!_isdigit(str[i])
			return (0);

		i++;
	}
	return (1);
}
/**
 * _isdigit - check if arg is a digit
 * @c: arg to be checke
 *
 * Return: 1 if it's a digit and 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
