#include <push_swap.h>

static void	init_stack(t_stack *stack)
{
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return ;
	stack->elem = 0;
	stack->index = 0;
	stack->place = 0;
	stack->next = NULL;
	stack->prev = NULL;
}

t_stack *stack_creator(char *avp, int size)
{
	t_stack	*stack;

	init_stack(stack);
	if (!stack)
		return (stack);
	atostack(avp, size, stack);
	return (stack);
}