/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:32:14 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/04 14:32:17 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

t_llst	*lst_init(t_llst *linked_list, t_cons del)
{
	linked_list->del = del;
	linked_list->size = 0;
	linked_list->first = NULL;
	linked_list->last = NULL;
	return (linked_list);
}

t_node *node_init(t_node *node)
{
	node->elem = NULL;
	node->next = NULL;
	node->prev = NULL; 
	return (node);
}

t_stack	*stack_init(t_stack *stack)
{
	stack->elem = 0;
	stack->index = 0;
	stack->weight = 0;
	return (stack);
}