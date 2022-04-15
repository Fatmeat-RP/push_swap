#include <push_swap.h>

void	mina_top(t_llst *stack_a)
{
	int		min;
	t_node	*node;

	if (stack_a->size < 1)
		return ;
	min = minstack(stack_a);
	node = node_min(stack_a);
	if (node_position(stack_a, node) < (stack_a->size / 2))
	{
		while ((*stack_a)->elem != min)
			ra(stack_a, 1);
		return ;
	}
	while ((*stack_a)->elem != min)
		rra(stack_a, 1);
}

int	minstack(t_llst *stack_a)
{
	t_node	*beg;
	int		min;

	beg = *stack_a;
	min = beg->elem;
	while (beg->next)
	{
		if (beg->elem < min)
			min = beg->elem;
		beg = beg->next;
	}
	if (beg->elem < min)
		min = beg->elem;
	return (min);
}

size_t	node_position(t_llst *stack_a, t_node *node)
{
	t_node	*beg;
	size_t	i;

	i = 0;
	beg = *stack_a;
	while (beg->next)
	{
		if (beg == node)
			return (i);
		i++;
		beg = beg->next;
	}
	if (beg == node)
		return (i);
	return (-1);
}

t_node	*node_min(t_llst *stack_a)
{
	t_node	*beg;
	t_node	*min;

	beg = *stack_a;
	min = beg;
	while (beg->next)
	{
		if (beg->elem < min->elem)
			min = beg;
		beg = beg->next;
	}
	if (beg->elem < min->elem)
		min = beg;
	return (min);
}

long long	max_index(t_llst *stack_a)
{
	t_node	*beg;
	int		max;

	beg = *stack_a;
	max = beg->index;
	while (beg->next)
	{
		if (beg->index > max)
			max = beg->index;
		beg = beg->next;
	}
	if (beg->index > max)
		max = beg->index;
	return(max);
}
