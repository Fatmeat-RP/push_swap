/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:56:22 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/16 15:56:22 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_llst	*init_index(t_llst *stack_a)
{
	t_node	*ref;
	t_node	*start;
	size_t	index;

	ref = stack_a->first;
	index = 0;
	set_up_index(stack_a);
	while (ref)
	{
		start = stack_a->first;
		index = 0;
		while (start)
		{
			if (ref->elem > start->elem)
			{
				index++;
				ref->index = index;
			}
			start = start->next;
		}
		ref = ref->next;
	}
	return (stack_a);
}

size_t	max_bit_len(long long nb)
{
	size_t	lb;

	lb = 32;
	while (lb != 0)
	{
		if (nb >> (lb - 1) & 1)
			return (lb);
		lb--;
	}
	return (lb);
}

void	set_up_index(t_llst *stack_a)
{
	t_node	*tmp;

	tmp = stack_a->first;
	while (tmp)
	{
		tmp->index = 0;
		tmp = tmp->next;
	}
}

void	printstack(t_llst *lst)
{
	t_node *tmp;

	tmp = lst->first;
	while(tmp != NULL)
	{
		printf("elem %d:: index %zu\n", tmp->elem, tmp->index);
		tmp = tmp->next;
	}
}