/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_setb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:02:55 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/16 16:02:57 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	sb(t_llst *stack_b, int p)
{
	t_node	*tmp;

	if (stack_b->size < 2)
		return (-1);
	tmp = stack_b->first;
	stack_b->first = stack_b->first->next;
	tmp->next = stack_b->first->next;
	stack_b->first->next = tmp;
	if (p)
		write(1, "sb\n", 3);
	return (0);
}

int	pb(t_llst *stack_a, t_llst *stack_b, int p)
{
	t_node	*a_start;

	a_start = stack_a->first->next;
	ft_lstadd_front(stack_b, stack_a->first);
	stack_a->first = a_start;
	stack_a->size -= 1;
	if (p)
		write(1, "pb\n", 3);
	return (0);
}

int	rb(t_llst *stack_b, int p)
{
	t_node	*one;
	t_node	*two;
	t_node	*last;

	if (stack_b->size < 2)
		return (-1);
	two = stack_b->first->next;
	one = stack_b->first;
	last = ft_lstlast(stack_b->first);
	last->next = one;
	one->next = NULL;
	stack_b->first = two;
	if (p)
		write(1, "rb\n", 3);
	return (0);
}

int	rrb(t_llst *stack_b, int p)
{
	t_node	*temp_second;
	t_node	*temp_before_last;
	t_node	*temp_last;

	if (stack_b->size < 2)
		return (-1);
	temp_before_last = stack_b->first;
	temp_last = ft_lstlast(stack_b->first);
	temp_second = stack_b->first->next;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = NULL;
	temp_last->next = stack_b->first;
	stack_b->first = temp_last;
	if (p)
		write (1, "rrb\n", 4);
	return (0);
}
