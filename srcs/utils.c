/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:56:26 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/16 15:56:26 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	min_top(t_llst *stack_a)
{
	int		min;
	t_node	*node;

	if (ft_lstsize(stack_a->first) < 1)
		return ;
	min = minstack(stack_a);
	node = node_min(stack_a);
	if (node_position(stack_a, node) < (ft_lstsize(stack_a->first) / 2))
	{
		while (stack_a->first->elem != min)
			ra(stack_a, 1);
		return ;
	}
	while (stack_a->first->elem != min)
		rra(stack_a, 1);
}

int	minstack(t_llst *stack_a)
{
	t_node	*beg;
	int		min;

	beg = stack_a->first;
	min = (int)beg->elem;
	while (beg)
	{
		if ((int)beg->elem < min)
			min = (int)beg->elem;
		beg = beg->next;
	}
	return (min);
}

size_t	node_position(t_llst *stack_a, t_node *node)
{
	t_node	*beg;
	size_t	i;

	i = 0;
	beg = stack_a->first;
	while (beg->next)
	{
		if (beg == node)
			return (i);
		i++;
		beg = beg->next;
	}
	if (beg == node)
		return (i);
	return (-1);
}

t_node	*node_min(t_llst *stack_a)
{
	t_node	*beg;
	t_node	*min;

	beg = stack_a->first;
	min = beg;
	while (beg->next)
	{
		if (beg->elem < min->elem)
			min = beg;
		beg = beg->next;
	}
	if (beg->elem < min->elem)
		min = beg;
	return (min);
}

long long	max_index(t_llst *stack_a)
{
	t_node	*beg;
	size_t	max;

	beg = stack_a->first;
	max = beg->index;
	while (beg->next)
	{
		if (beg->index > max)
			max = beg->index;
		beg = beg->next;
	}
	if (beg->index > max)
		max = beg->index;
	return (max);
}
