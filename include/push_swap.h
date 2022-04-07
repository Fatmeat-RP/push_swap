/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:36 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/07 21:07:15 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
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

t_return	*aostoaoi(char *s, int size);
t_return	*giga_atoi(char	*s);
t_stack 	*stack_creator(char *avp, int size);
int			args_to_stack_a(int ac, char **av, t_llst *stack_a);
void		push_front(t_stack *stack_from, t_stack *stack_to);
int			check_doublon(t_llst *stack_a);
int			check_char(char c);
int			atostack(char *s, int size, t_stack *stack);
t_return	*giga_atoi(char	*s);

#endif
