#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int len = 0, val;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	val = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = val;
}
