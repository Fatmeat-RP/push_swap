/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_addback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:40:42 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/04 14:49:55 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	ft_lstadd_back(t_llst *linked_list, t_node *new)
{
	t_node	*p;

	if (!linked_list->first)
		linked_list->first = new;
	else
	{
		p = linked_list->last;
		p->next = new;
		new->prev = p;
	}
	linked_list->last = new;
	linked_list->size += 1;
}