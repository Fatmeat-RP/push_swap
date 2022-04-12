/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:36 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/12 16:29:55 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stack.h>

typedef struct s_return t_return;

struct s_return
{
	void		*r1;
	void		*r2;
	void		*r3;
	void		*r4;
	void		*r5;
};

t_return	*giga_atoi(char	*s);
t_llst	 	*stack_creator(char *avp, int size);
t_llst		*args_to_stack_a(int ac, char **av);
t_llst		*atostack(char *s, int size);
int			check_doublon(t_llst *stack_a);
int			check_char(char c);

#endif
