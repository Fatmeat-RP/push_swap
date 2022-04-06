/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:26:55 by cben-bar          #+#    #+#             */
/*   Updated: 2022/03/09 18:44:30 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	sort_it(t_list	**stack_a, t_list **stack_b, t_data *data)
{
	if (list_len(*stack_a) == 1)
		exit(EXIT_FAILURE);
	a_is_sorted(stack_a, data);
	if (list_len(*stack_a) == 2)
		sort_two(stack_a);
	else if (list_len(*stack_a) == 3)
		sort_three(stack_a);
	else if (list_len(*stack_a) <= 5)
		sort_five(stack_a, stack_b);
	else
		sort_big_stack(stack_a, stack_b);
}
