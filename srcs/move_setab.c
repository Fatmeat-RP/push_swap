#include <push_swap.h>

int	ss(t_llst *stack_a, t_llst *stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	write(1, "ss\n", 3);
	return (0);
}

int	rr(t_llst *stack_a, t_llst *stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
	return (0);
}

int	rrr(t_llst *stack_a, t_llst *stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rrr\n", 4);
	return (0);
}