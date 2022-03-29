int	sa(t_stack stack_a)
{
	int	tmp;

	if (stack_b == NULL || stack_b->next == NULL)
		return (-1);
	tmp = stack_a->next;
	stack_a->next = stack_a;
	stack_a = tmp;
}

int	pa(t_stack stack_a)
{
	if (push_front(stack_b, stack_a) == -1)
		return (-1);
	write(1, "pa\n", 3);
	return (0);
}

int	ra(t_stack stack_a)
{
	if (shiftstack(stack_a) == -1)
		return (-1);
	write(1, "ra\n", 3);
	return (0);
}

int	rra(t_stack stack_a)
{
	if (reverse_shift_stack(stack_a) == -1)
		return (-1);
	write(1, "rra\n", 4);
	return (0);
}
