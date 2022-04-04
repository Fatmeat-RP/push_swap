#include <push_swap.h>

int	shiftstack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = lstlast(stack);
	tmp->next = stack;
	tmp = tmp->next;
	tmp->next = NULL;
	return (0);
}

int	reverse_shift_stack(t_stack *stack)
{
	t_stack *tmp;
	
	tmp = lstlast(stack);
	tmp->next = stack;
	
	tmp = tmp->prev;
	tmp->next = NULL;
	return (0);
}