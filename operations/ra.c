/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:37:26 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/15 13:32:15 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_list **stack_a, int to_print)
{
	t_list	*one;
	t_list	*two;
	t_list	*last;

	if (list_len(*stack_a) < 2)
		return ;
	two = (*stack_a)->next;
	one = *stack_a;
	last = ft_lstlast(*stack_a);
	last->next = one;
	one->next = NULL;
	*stack_a = two;
	if (to_print)
		write(1, "ra\n", 3);
}
