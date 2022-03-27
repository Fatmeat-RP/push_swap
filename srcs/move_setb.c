int	sb(t_stack stack_b)
{
	int	tmp;

	if (stack_b == NULL || stack_b->next == NULL)
		return (-1);
	tmp = stack_b->next;
	stack_b->next = stack_b;
	stack_b = tmp;
	return (0);
}

int	pb(t_stack stack_a, t_stack stack_b)
{
	push_front(stack_a, stack_b);
}

int	rb(t_stack stack_b)
{
	shiftstack(stack_b);
}

int	rrb(t_stack stack_b)
{
	reverse_shift_stack(stack_b);
}
