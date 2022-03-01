#include <push_swap.h>

int	main(int ac, char **av)
{
//	t_stack	stack_a;
//	t_stack	stack_b;
/*	int		i;

	i = 1;*/
	args_to_stack_a(ac, av);
/*	sorting_stack_a(stack_a, stack_b);*/
	return (0);
}

int	check_char(char c)
{
	return ((c < 0 || (c > 20 && c < '0') || c > '9')
}

void	args_to_stack_a(int ac, char **av)
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
			break ;
		}
/*				|| get_err())
			return (-1);*/
		if (avp[i] == '\0')
			null_counter++;
		i++;
	}
	write(1, avp, i);
/*	i = 0;
	while(avp[i] && null_counter)
	{
		if (avp[i] > '0' && avp[i] < '9')// || new_nodes(stack_a, avp[i]))
			return (-1);
		if (avp[i] == '\0')
			null_counter--;
		i++;
	}
	return (stack_a);
*/}

/*int    new_nodes(t_stack *stack_a, char *s)
{
    t_stack *new_nodes;

	new_nodes = ft_stack_new(stack_ft_atoi(s));
	link_nodes_back(stack_a, new_nodes);
    
}*/

