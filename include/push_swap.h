/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:09:36 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/18 17:26:52 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "stack.h"

typedef struct s_return	t_return;

struct s_return
{
	size_t		r1;
	int			r2;
	void		*r3;
	void		*r4;
	void		*r5;
};

/* utils and parsing */

t_return	*giga_atoi(char	*s);
t_llst		*stack_creator(char *avp, size_t size);
t_llst		*args_to_stack_a(int ac, char **av);
t_llst		*atostack(char *s, size_t size);
t_llst		*init_index(t_llst *stack_a);
t_node		*node_min(t_llst *stack_a);
long long	max_index(t_llst *stack_a);
size_t		max_bit_len(long long nb);
size_t		node_position(t_llst *stack_a, t_node *node);
int			check_doublon(t_llst *stack_a);
int			check_char(char c);
int			sorted(t_node *stack, size_t stack_size);
int			minstack(t_llst *stack_a);
void		min_top(t_llst *stack_a);
int			sort(t_llst *stack_a, t_llst *stack_b);
t_llst		*init_stack_b(void);
void		sort_two(t_llst *stack_a);
void		sort_three(t_llst *stack_a);
void		sort_five(t_llst *stack_a, t_llst *stack_b);
void		sort_big_stack(t_llst *stack_a, t_llst *stack_b);
void		set_up_index(t_llst *stack_a);

/* move set */

int			sa(t_llst *stack_a, int p);
int			pa(t_llst *stack_a, t_llst *stack_b, int p);
int			ra(t_llst *stack_a, int p);
int			rra(t_llst *stack_a, int p);

int			sb(t_llst *stack_b, int p);
int			pb(t_llst *stack_a, t_llst *stack_b, int p);
int			rb(t_llst *stack_b, int p);
int			rrb(t_llst *stack_b, int p);

int			ss(t_llst *stack_a, t_llst *stack_b);
int			rr(t_llst *stack_a, t_llst *stack_b);
int			rrr(t_llst *stack_a, t_llst *stack_b);

void	printstack(t_llst *lst);

#endif
