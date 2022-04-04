/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_addfront.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:42:16 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/04 14:50:08 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	ft_lstadd_front(t_llst *linked_list, t_node *new)
{
	if (!linked_list)
		linked_list->last = new;
	if (linked_list->first)
	{
		new->next = linked_list->first;
		linked_list->first->prev = new;
	}
	linked_list->first = new;
	linked_list->size += 1;
}