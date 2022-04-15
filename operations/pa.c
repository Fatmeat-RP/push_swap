/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:37:26 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/01 14:56:31 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*b_start;

	b_start = (*stack_b)->next;
	ft_lstadd_front(stack_a, *stack_b);
	*stack_b = b_start;
	write(1, "pa\n", 3);
}
