/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:03:34 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/19 13:57:21 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

t_node	*new_node_2(int elem, t_node *next)
{
	t_node	*entry;

	entry = malloc(sizeof(t_node));
	if (!entry)
	{
		free(next);
		return (NULL);
	}
	entry->elem = elem;
	entry->next = next;
	return (entry);
}

t_node	*new_node(int value)
{
	return (new_node_2(value, NULL));
}
