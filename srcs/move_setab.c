#include <push_swap.h>

int	ss(t_llst *stack_a, t_llst *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 4);
	return (0);
}

int	rr(t_llst *stack_a, t_llst *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 4);
	return (0);
}

int	rrr(t_llst *stack_a, t_llst *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 5);
	return (0);
}