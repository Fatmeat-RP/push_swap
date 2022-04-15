#include <push_swap.h>

int	sa(t_llst *stack_a)
{
	t_node	*tmp;

	if (stack_a->size < 2)
		return (-1);
	tmp = stack_a->first;
	stack_a->first = stack_a->first->next;
	tmp->next = stack_a->first->next;
	stack_a->first->next = tmp;
	write(1, "sa\n", 4);
	return (0);
}

int	pa(t_llst *stack_a, t_llst *stack_b)
{
	t_node	*b_start;

	b_start = stack_b->first->next;
	ft_lstadd_front(stack_a, stack_b->first);
	stack_b->first = b_start;
	stack_a->size += 1;
	stack_b->size -= 1;
	write(1, "pa\n", 4);
	return (0);
}

int	ra(t_llst *stack_a)
{
	t_node	*one;
	t_node	*two;
	t_node	*last;

	if (stack_a->size < 2)
		return (-1);
	two = stack_a->first->next;
	one = stack_a->first;
	last = stack_a->last;
	last->next = one;
	one->next = NULL;
	stack_a->first = two;
	write(1, "ra\n", 4);
	return (0);
}

int	rra(t_llst *stack_a)
{
	t_node	*temp_second;
	t_node	*temp_before_last;
	t_node	*temp_last;

	if (stack_a->size < 2)
		return (-1);
	temp_before_last = stack_a->first;
	temp_last = stack_a->last;
	temp_second = stack_a->first->next;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = NULL;
	temp_last->next = stack_a->first;
	stack_a->first = temp_last;
	write (1, "rra\n", 5);
	return (0);
}
