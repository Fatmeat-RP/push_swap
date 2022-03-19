#include <push_swap.h>

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (!args_to_stack_a(ac, av, stack_a))
		return (-1);
	sorting_stack_a(stack_a, stack_b);
	return (0);
}

int	check_char(char c)
{
	return ((c < 0 || (c > 20 && c < '0') || c > '9')
}

check_doublon(t_stack stack_a)
{
	t_stack *tmp;

	tmp = stack_a;
	while (tmp->next != NULL && stack_a->next != NULL)
	{
		if (tmp->elem == stack_a->elem && tmp->index != stack_a->index)
			return (-1);
		tmo = tmp->next;
		stack_a = stack_a->next;
	}
	retrun (0);
}

void	args_to_stack_a(int ac, char **av, t_stack stack_a)
{
	int	i;
	int	null_counter;
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
	stack_a = avp_to_stack(avp);
	check_doublon(stack_a);
	return(i);
}

/*int    new_nodes(t_stack *stack_a, char *s)
{
    t_stack *new_nodes;

	new_nodes = ft_stack_new(stack_ft_atoi(s));
	link_nodes_back(stack_a, new_nodes);
    
}*/
