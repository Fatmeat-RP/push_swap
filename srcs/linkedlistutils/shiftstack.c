int	shiftstack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = lstlast(stack);
	tmp->next = stack_a;
	tmp = tmp->next;
	tmp->next = NULL;
	return (0);
}

int	reverse_shift_stack()
{
	tmp = lstlast(stack);
	tmp->next = stack;
	
	tmp = tmp->previous;
	tmp->next = NULL;
	return (0);
}