/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:32:14 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/07 21:12:41 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

t_llst	*lst_init(t_llst *linked_list, t_cons del)
{
	linked_list = malloc(sizeof(t_llst));
	if (!linked_list)
		return ;
	linked_list->del = del;
	linked_list->size = 0;
	linked_list->first = NULL;
	linked_list->last = NULL;
	return (linked_list);
}

t_node *node_init(t_node *node)
{
	node = malloc(sizeof(t_node));
	if (!node)
		return ;
	node->elem = NULL;
	node->next = NULL;
	return (node);
}

t_stack	*stack_init(t_stack *stack)
{
	stack = malloc(sizeof(t_stack));
	if (!stack)
		return ;
	stack->elem = 0;
	stack->index = 0;
	return (stack);
}