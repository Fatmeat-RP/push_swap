#include <push_swap.h>

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (!args_to_stack_a(ac, av, &stack_a))
	{
		printf("Error !");
		return (-1);
	}
//	sorting_stack_a(stack_a, stack_b);
	return (0);
}

int	check_char(char c)
{
	return ((c < 0 || (c > 20 && c < '0') || c > '9'));
}

int	check_doublon(t_stack *stack_a)
{
	t_stack *tmp;
	t_stack *pa;

	pa = stack_a;
	tmp = pa;
	while (stack_a->next != NULL)
	{
		tmp = pa;
		while(tmp->next != NULL)
		{
			if (tmp->elem == stack_a->elem && tmp->index != stack_a->index)
				return (stack_a->elem);
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
	return (0);
}

int	args_to_stack_a(int ac, char **av, t_stack *stack_a)
{
	int		i;
	int		null_counter;
	char	*avp;

	i = 0;
	avp = av[1];
	while(null_counter < (ac - 1))
	{
		if (check_char(avp[i]))
		{
			printf("Error\n");
			return(-1);
		}
		if (avp[i] == '\0')
			null_counter++;
		i++;
	}
	write(1, avp, i);
	stack_a = stack_creator(avp, i);
	i = check_doublon(stack_a);
	if (i)
	{
		printf("donblon : %d\n", i);
		return (-1);
	}
	return(i);
}
