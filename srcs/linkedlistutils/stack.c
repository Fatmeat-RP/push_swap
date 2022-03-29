t_stack **stack_creator(char **avp, int	size)
{
	t_stacl **stack;
	int		*elem;

	elem = aostoaoi(avp, size);
	t_stack = malloc(sizeof(stack *));
	while(elem[i] <= size)
	{
		ft_lstadd_back(stack, ft_lstnew(elem[i]));
	}
	return (stack)
}