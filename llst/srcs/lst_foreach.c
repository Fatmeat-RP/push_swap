/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_foreach.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:31:57 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/04 14:32:03 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	lst_foreach(t_llst *linked_list, t_cons fun)
{
	t_node	*node;

	if (lst_is_empty(linked_list))
		return ;
	node = linked_list->first;
	fun(node->elem);
	while (node->next)
	{
		node = node->next;
		fun(node->elem);
	}
}

void	lst_foreachduo(t_llst *linked_list, t_dcons fun, void *param)
{
	t_node	*node;

	if (lst_is_empty(linked_list))
		return ;
	node = linked_list->first;
	fun(node->elem, param);
	while (node->next)
	{
		node = node->next;
		fun(node->elem, param);
	}
}