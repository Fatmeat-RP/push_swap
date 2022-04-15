#include <push_swap.h>

int	sb(t_llst *stack_b)
{
	t_node	*tmp;

	if (stack_b->size < 2)
		return (-1);
	tmp = stack_b->first;
	stack_b->first = stack_b->first->next;
	tmp->next = stack_b->first->next;
	stack_b->first->next = tmp;
	write(1, "sb\n", 4);
	return (0);
}

int	pb(t_llst *stack_a, t_llst *stack_b)
{
	t_node	*a_start;

	a_start = stack_a->first->next;
	ft_lstadd_front(stack_b, stack_a->first);
	stack_a->first = a_start;
	stack_b->size += 1;
	stack_a->size -= 1;
	write(1, "pb\n", 4);
	return (0);
}

int	rb(t_llst *stack_b)
{
	t_node	*one;
	t_node	*two;
	t_node	*last;

	if (stack_b->size < 2)
		return (-1);
	two = stack_b->first->next;
	one = stack_b->first;
	last = stack_b->last;
	last->next = one;
	one->next = NULL;
	stack_b->first = two;
	write(1, "rb\n", 4);
	return (0);
}

int	rrb(t_llst *stack_b)
{
	t_node	*temp_second;
	t_node	*temp_before_last;
	t_node	*temp_last;

	if (stack_b->size < 2)
		return (-1);
	temp_before_last = stack_b->first;
	temp_last = stack_b->last;
	temp_second = stack_b->first->next;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = NULL;
	temp_last->next = stack_b->first;
	stack_b->first = temp_last;
	write (1, "rrb\n", 5);
	return (0);
}
