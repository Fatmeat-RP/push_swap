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
	push_front(stack_b, stack_a);
}

int	ra(t_stack stack_a)
{
	shiftstack(stack_a);
}

int	rra(t_stack stack_a)
{
	reverse_shift_stack(stack_a);
}
