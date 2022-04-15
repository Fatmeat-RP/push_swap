/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:50:32 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/15 13:32:38 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rb(t_list **stack_b, int to_print)
{
	t_list	*one;
	t_list	*two;
	t_list	*last;

	if (list_len(*stack_b) < 2)
		return ;
	two = (*stack_b)->next;
	one = *stack_b;
	last = ft_lstlast(*stack_b);
	last->next = one;
	one->next = NULL;
	*stack_b = two;
	if (to_print)
		write(1, "rb\n", 3);
}
