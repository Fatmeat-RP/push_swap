void	sort(t_stack stack_a, t_stack stack_b, int stack_size)
{
	int	i;
	int	j;

	i = 0;
	if (sorted(stack_a) || stack_size <= 0)
			return ;
	while (!sorted(stack_a))
	{
		j = 0;
		while(while j < stack_size)
		{
			int num = *(stack_a)->elem;
			if ((num >> i) & 1)
				ra();
			else
				pb();
			j++;
		}
		while (!empty(stack_b))
			pa();
		i++;
	}
}

int	sorted(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack_size)
	{
		if (stack->array[i + 1] > stack->array[i])
			return (-1);
	}
	return (1);
}