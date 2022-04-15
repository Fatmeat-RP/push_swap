/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:46:14 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/15 13:58:46 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rrr(t_list **stack_a, t_list **stack_b, int to_find)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	if (to_find)
		write(1, "rrr\n", 4);
}
