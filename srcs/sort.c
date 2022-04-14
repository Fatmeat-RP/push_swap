/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:31:14 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/14 20:13:07 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>


void	sort(t_llst *stack_a, t_llst *stack_b)
{
	a_is_sorted(stack_a, data);
	if (stack_a->size == 2)
		sort_two(stack_a);
	else if (list_len(*stack_a) == 3)
		sort_three(stack_a);
	else if (list_len(*stack_a) <= 5)
		sort_five(stack_a, stack_b);
	else
		sort_big(stack_a, stack_b);
}


void	sort_two(t_llst *stack_a)
{
	sa(stack_a);
}

void	sort_three(t_list **stack_a)
{
	int	top;
	int	mid;
	int	end;

	top = (*stack_a)->first->elem;
	mid = (*stack_a)->first->next->elem;
	end = (*stack_a)->first->next->next->elem;
	if (top > mid && top < end && mid < end)
		sa(stack_a, 1);
	else if (top > mid && top > end && mid > end)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (top > mid && top > end && mid < end)
		ra(stack_a, 1);
	else if (top < mid && top < end && mid > end)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (top < mid && top > end && mid > end)
		rra(stack_a, 1);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	if (stack_a->size == 5)
	{
		mina_top(stack_a);
		pb(stack_a, stack_b);
		mina_top(stack_a);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
		return ;
	}
	mina_top(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_big(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (!sorted(stack_a, stack_a->size))
	{
		j = 0;
		while(j < stack_a->size)
		{
			num = stack_a->elem;
			if ((num >> i) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (!empty(stack_b))
			pa(stack_a, stack_b);
		i++;
	}
}