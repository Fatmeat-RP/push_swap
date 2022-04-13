/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:28:58 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/12 18:20:47 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_llst	*stack_a;

	if (ac == 1)
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
	if (sorted(stack_a->first, stack_a->size) || stack_a->size <= 0)
	{
		write(2, "stack is already sorted or null\n", 33);
		//llst_clear(stack_a);
		return (0);
	}
	if (check_doublon(stack_a))
	{
		write(2, "Error, duplicate element\n", 26);
		llst_clear(stack_a);
		return (-1);
	}
	return (0);
}

int	check_char(char c)
{
	return ((c < 0 || (c > 32 && c < '0') || c > '9'));
}

int	check_doublon(t_llst *stack_a)
{
	t_node	*tmp;
	t_node	*psa;

	psa = stack_a->first;
	tmp = psa;
	while (stack_a->first->next != NULL)
	{
		tmp = psa;
		while (tmp->next != NULL)
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
			write (2, "Error\n", 7);
			return (NULL);
		}
		if (avp[i] == '\0')
		{
			avp[i] = ' ';
			null_counter++; 
		}
		i++;
	}
	write (1, avp, i);
	stack_a = stack_creator(avp, i);
	return (stack_a);
}
