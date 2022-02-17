/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_ope.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:19:19 by acarle-m          #+#    #+#             */
/*   Updated: 2022/02/16 19:19:21 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	stack_ft_atoi(int off_set, char *s)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	off_set += i;
	return (res);
}

sorting_stack_a(stack_am stack_b)
{
}
