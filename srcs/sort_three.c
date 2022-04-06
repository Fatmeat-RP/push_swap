/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:23:45 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/25 19:46:36 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_list **stack_a)
{
	int	top;
	int	mid;
	int	end;

	top = (*stack_a)->content;
	mid = (*stack_a)->next->content;
	end = (*stack_a)->next->next->content;
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
