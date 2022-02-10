/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:36 by acarle-m          #+#    #+#             */
/*   Updated: 2022/02/10 19:39:03 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <libft.h>

typedef struct s_args
{
	int	*args
}	t_args;

typedef struct s_stack
{
	int		num;
	int		index;
	t_stack	*next;
	t_stack	*prev;
	t_stack	*first;
	t_stack	*last;
}	t_stack;