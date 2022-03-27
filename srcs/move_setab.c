ss
{
	int	tmp;

	if ((stack_b == NULL || stack_b->next == NULL)
		|| (stack_a== NULL || stack_a->next == NULL))
		return (-1);
	tmp = stack_b->next;
	stack_b->next = stack_b;
	stack_b = tmp;
	tmp = stack_a->next;
	stack_a->next = stack_a;
	stack_a = tmp;
	return (0);
}

int	rr(t_stack stack_a, t_stack stack_b)
{
	shiftstack(stack_a);
	shiftstack(stack_b);
}

int	rrr(t_stack stack_a, t_stack stack_b)
{
	reverse_shift_stack(stack_a);
	reverse_shift_stack(stack_b);
}