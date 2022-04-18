/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:32:14 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/18 17:02:21 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

t_llst	*lst_init(void)
{
	t_llst	*linked_list;

	linked_list = malloc(sizeof(t_llst));
	if (!linked_list)
		return (NULL);
	linked_list->first = NULL;
	return (linked_list);
}

t_node	*node_init(t_node *node)
{
	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->elem = 0;
	node->index = 0;
	node->next = NULL;
	return (node);
}
