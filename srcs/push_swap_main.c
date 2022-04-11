#include <push_swap.h>

int	main(int ac, char **av)
{
	t_llst	*stack_a;

	stack_a = args_to_stack_a(ac, av);
	if (!stack_a)
	{
		write(2, "Error, couldn't init the stack_a\n", 54);
		return (-1);
	}
	if (sorted(stack_a, stack_a->size) || stack_a->size <= 0)
	{
			write(2, "stack is already sorted or null\n", 30);
			lst_clear(stack_a, free);
			return (0);
	}
	if (check_doublon(stack_a))
	{
		write(2, "Error, duplicate element\n", 25);
		return (-1);
	}
//	sorting_stack_a(stack_a, stack_b);
	return (0);
}

int	check_char(char c)
{
	return ((c < 0 || (c > 20 && c < '0') || c > '9'));
}

int	check_doublon(t_llst *stack_a)
{
	t_node *tmp;
	t_node *psa;

	psa = stack_a->first;
	tmp = psa;
	while (stack_a->first->next != NULL)
	{
		tmp = psa;
		while(tmp->next != NULL)
		{
			if (tmp->elem == stack_a->first->elem
				&& tmp->elem->index != stack_a->first->elem->index)
				return (stack_a->first->elem->elem);
			tmp = tmp->next;
		}
		stack_a->first = stack_a->first->next;
	}
	return (0);
}

t_llst	*args_to_stack_a(int ac, char **av)
{
	int		i;
	int		null_counter;
	char	*avp;
	t_llst	*stack_a;

	i = 0;
	avp = *av;
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
	return(stack_a);
}
