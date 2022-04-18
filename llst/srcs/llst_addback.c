/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_addback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:40:42 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/18 16:32:42 by acarle-m         ###   ########.fr       */
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
		p = ft_lstlast(linked_list->first);
		p->next = new;
	}
}
