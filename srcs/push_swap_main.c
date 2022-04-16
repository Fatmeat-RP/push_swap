/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:28:58 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/16 13:58:43 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_llst	*stack_a;
	t_llst	*stack_b;

	if (ac <= 1)
	{
		write (2, "need at least one arguments with two elements\n", 46);
		return (-1);
	}
	stack_a = args_to_stack_a(ac, av);
	if (!stack_a)
	{
		write(2, "Error, couldn't init the stack_a\n", 34);
		return (-1);
	}
	if (check_doublon(stack_a) == -1)
	{
		write(2, "Error, duplicate element\n", 26);
		if (stack_a->first)
			llst_clear(stack_a);
		return (-1);
	}
	if (sorted(stack_a->first, stack_a->size) >= 0)
	{
		write(2, "stack is already sorted or null\n", 33);
		if (stack_a->first)
			llst_clear(stack_a);
		return (-1);
	}
	stack_b = init_stack_b();
	if (!stack_b)
	{
		write(2, "couldn't initialize stack b\n", 29);
		llst_clear(stack_a);
		return (-1);
	}
	if (!sort(stack_a, stack_b))
	{
//		llst_clear(stack_a);
//		llst_clear(stack_b);
		write(2, "couldn't sort stack a\n", 23);
		return (-1);
	}
//	llst_clear(stack_a);	
//	llst_clear(stack_b);
	return (0);
}

int	check_char(char c)
{
	return (((c < 0 || (c > 32 && c < '0') || c > '9') && !(c == 45 || c == 43)));
}

int	check_doublon(t_llst *stack_a)
{
	t_node	*tmp;
	t_node	*psa;

	psa = stack_a->first;
	tmp = psa;
	while (psa->next != NULL)
	{
		tmp = psa->next;
		while (tmp != NULL)
		{
			if (tmp->elem == psa->elem)
				return (-1);
			tmp = tmp->next;
		}
		psa = psa->next;
	}
	return (1);
}

t_llst	*args_to_stack_a(int ac, char **av)
{
	size_t	i;
	size_t	null_counter;
	char	*avp;
	t_llst	*stack_a;

	i = 0;
	null_counter = 0;
	avp = av[1];
	while (null_counter < (size_t)(ac - 1))
	{
		if (check_char(avp[i]))
		{
			write (2, "Error, bad arguments\n", 22);
			return (NULL);
		}
		else if (avp[i] == '\0')
		{
			avp[i] = ' ';
			null_counter++; 
		}
		i++;
	}
	stack_a = stack_creator(avp, i);
	return (stack_a);
}
