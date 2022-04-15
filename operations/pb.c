/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 04:00:11 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/08 19:05:52 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*a_start;

	a_start = (*stack_a)->next;
	ft_lstadd_front(stack_b, *stack_a);
	*stack_a = a_start;
	write(1, "pb\n", 3);
}
