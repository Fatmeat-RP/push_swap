#include <push_swap.h>

int	main(int ac, char **av)
{
	t_stack stack_a;
	int	i;

	i = 1;
	args_to_stack_a(ac, av);
	return (0);
}

args_to_stack_a(t_stack *stack_a, int ac, char **av)
{
	int		i;
	int		null_counter;
	t_stack	*new_elem;

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
			i += create_new_nodes(stack_a, *(av[1]  + i, new_elem));
		if (av[1][i] == '\0')
			null_counter--;
		i++;
	}
	link_nodes_back(stack_a, new_elem);
	return (stack_a);
}

create_new_nodes(t_stack *stack_a, char *s)
{
	/* need to create and malloc a new eleme and add it to*/
	stack_a = 
	stack_ft_atoi(s);
}