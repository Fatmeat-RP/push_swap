t_stack **stack_creator(char **avp, int	size)
{
	t_stacl **stack;
	int		*elem;

	t_stack = malloc(sizeof(stack *));
	if (!stack)
		return (NULL);
	atostack(avp, size, stack);
	return (stack)
}