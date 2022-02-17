#include <push_swap.h>

int	main(int ac, char **av)
{
	t_stack stack_a;
    t_stack stack_b;
	int	i;

	i = 1;
	args_to_stack_a(ac, av);
    sorting_stack_a(stack_a, stack_b);
	return (0);
}

args_to_stack_a(t_stack *stack_a, int ac, char **av)
{
	int		i;
	int		null_counter;

	i = 0;
	while(av[1][i] && null_counter < ac)
	{
		if (av[1][i] < '0' && av[1][i] > 20 || av[1][i] > '9' || av[1][i])
			return (-1);
		if (av[1][i] == '\0')
			null_counter++;
		i++;
	}
	i = 0;
	while(av[1][i] && null_counter)
	{
		if (av[1][i] < '0' && av[1][i] > '9')
			i += create_new_nodes(stack_a, *(av[1] + i));
		if (av[1][i] == '\0')
			null_counter--;
		i++;
	}
	return (stack_a);
}

void    new_nodes_handling(t_stack *stack_a, char *s)
{
    t_stack *new_nodes;

	new_nodes = ft_stack_new(stack_ft_atoi(s));
	link_nodes_back(stack_a, new_nodes);
    
}
