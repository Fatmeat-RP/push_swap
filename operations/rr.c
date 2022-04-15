/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:59:33 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/15 13:31:53 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b, int to_print)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (to_print)
		write(1, "rr\n", 3);
}
