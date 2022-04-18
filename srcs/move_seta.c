/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_seta.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:03:14 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/18 16:25:32 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	sa(t_llst *stack_a, int p)
{
	t_node	*tmp;

	if (ft_lstsize(stack_a->first) < 2)
		return (-1);
	tmp = stack_a->first;
	stack_a->first = stack_a->first->next;
	tmp->next = stack_a->first->next;
	stack_a->first->next = tmp;
	if (p)
		write(1, "sa\n", 3);
	return (0);
}

int	pa(t_llst *stack_a, t_llst *stack_b, int p)
{
	t_node	*b_start;

	b_start = stack_b->first->next;
	ft_lstadd_front(stack_a, stack_b->first);
	stack_b->first = b_start;
	if (p)
		write(1, "pa\n", 3);
	return (0);
}

int	ra(t_llst *stack_a, int p)
{
	t_node	*one;
	t_node	*two;
	t_node	*last;

	if (ft_lstsize(stack_a->first) < 2)
		return (-1);
	two = stack_a->first->next;
	one = stack_a->first;
	last = ft_lstlast(stack_a->first);
	last->next = one;
	one->next = NULL;
	stack_a->first = two;
	if (p)
		write(1, "ra\n", 3);
	return (0);
}

int	rra(t_llst *stack_a, int p)
{
	t_node	*temp_second;
	t_node	*temp_before_last;
	t_node	*temp_last;

	if (ft_lstsize(stack_a->first) < 2)
		return (-1);
	temp_before_last = stack_a->first;
	temp_last = ft_lstlast(stack_a->first);
	temp_second = stack_a->first->next;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = NULL;
	temp_last->next = stack_a->first;
	stack_a->first = temp_last;
	if (p)
		write (1, "rra\n", 4);
	return (0);
}
