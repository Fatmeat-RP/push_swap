/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 04:03:57 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/15 13:57:37 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrb(t_list **stack_b, int to_print)
{
	t_list	*temp_second;
	t_list	*temp_before_last;
	t_list	*temp_last;

	if (list_len(*stack_b) < 2)
		return ;
	temp_before_last = (*stack_b);
	temp_last = ft_lstlast(*stack_b);
	temp_second = (*stack_b)->next;
	while (temp_before_last->next->next)
		temp_before_last = temp_before_last->next;
	temp_before_last->next = NULL;
	temp_last->next = *stack_b;
	*stack_b = temp_last;
	if (to_print)
		write (1, "rrb\n", 4);
}
