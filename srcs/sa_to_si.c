/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_to_si.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:28:54 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/12 17:35:20 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_llst	*stack_creator(char *avp, size_t size)
{
	t_llst	*stack;

	stack = atostack(avp, size);
	return (stack);
}

t_llst	*atostack(char *s, size_t size)
{
	t_return	*ret;
	size_t		i;
	t_llst		*stack;

	stack = lst_init((t_cons)llst_clear);
	i = 0;
	while (i < size)
	{
		ret = giga_atoi(&(s[i]));
		if (!ret)
		{
			llst_clear(stack);
			return (NULL);
		}
		ft_lstadd_back(stack, new_node(ret->r1));
		i += (size_t)ret->r2;
		free(ret);
	}
	return (stack);
}

t_return	*giga_atoi(char	*s)
{
	t_return	*ret;
	long		res;
	long		maybe_neg;
	size_t		i;

	res = 0;
	maybe_neg = 1;
	i = 0;
	ret = malloc(sizeof(t_return));
	if (!ret)
		return (NULL);
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
		if (s[i++] == '-')
			maybe_neg *= (-1);
	while (s[i] >= '0' && s[i] <= '9')
		res = res * 10 + (s[i++] - '0');
	ret->r1 = (void *)i;
	ret->r2 = (void *)(res * maybe_neg);
	return (ret);
}
