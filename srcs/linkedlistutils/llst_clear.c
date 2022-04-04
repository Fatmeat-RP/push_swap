/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:17:40 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/04 15:35:06 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

void	node_clear(t_node *node)
{
	void	*p;

	while (node)
	{
		p = node->next;
		free(node->elem);
		free(node);
		node = p;
	}
}

void	llst_clear(t_llst *linked_list)
{
	lst_foreach(linked_list, (t_cons)node_clear);
	free(linked_list);
}
