/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:04:08 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/18 17:13:17 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

t_node	*ft_lstlast(t_node *node)
{
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}

size_t	ft_lstsize(t_node *node)
{
	size_t	i;
	t_node	*tmp;

	i = 0;
	tmp = node;
	if (lst_is_empty(node) == -1)
	{
		while (tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
