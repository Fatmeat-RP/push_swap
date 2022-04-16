/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:17:40 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/16 16:05:09 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	llst_clear(t_llst *linked_list)
{
	t_node	*node;
	t_node	*tmp;

	node = linked_list->first;
	while (node != NULL)
	{
		tmp = node;
		node = node->next;
		if (tmp)
			free(tmp);
	}
	free(linked_list);
}
