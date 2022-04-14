/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:31:14 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/14 19:31:16 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

//void	sort(t_stack *stack_a, t_stack *stack_b, int stack_size)
//{
//	int	i;
//	int	j;
//	int	num;
//
//	i = 0;
//	if (sorted(stack_a, stack_size) || stack_size <= 0)
//			return ;
//	while (!sorted(stack_a, stack_size))
//	{
//		j = 0;
//		while(j < stack_size)
//		{
//			num = stack_a->elem;
//			if ((num >> i) & 1)
//				ra();
//			else
//				pb();
//			j++;
//		}
//		while (!empty(stack_b))
//			pa();
//		i++;
//	}
//}

int	sorted(t_node *node, size_t stack_size)
{
	size_t	i;

	i = 0;
	if (stack_size <= 1)
		return (-1);
	while (node->next && (i <= stack_size))
	{
		if (node->elem > node->next->elem)
			return (-1);
		node = node->next;
		i++;
	}
	return (1);
}