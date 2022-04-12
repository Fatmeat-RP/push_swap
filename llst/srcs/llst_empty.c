/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llst_empty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:32:08 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/12 16:34:09 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack.h>

int	lst_is_empty(t_llst *linked_list)
{
	if (!linked_list)
		return (TRUE);
	return (!(linked_list->first));
}

int	lst_not_empty(t_llst *linked_list)
{
	if (!linked_list)
		return (TRUE);
	return (!!(linked_list->first));
}