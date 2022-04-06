/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:36:01 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/04 15:35:46 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

/* ************************************************************************** */

typedef struct s_stack t_stack;
typedef struct s_llst t_llst;
typedef struct s_node t_node;
typedef unsigned long t_lp64;
typedef unsigned int t_ui64;
typedef	void	(*t_dcons)(void *, void *);
typedef void	(*t_cons)(void *);

/* ************************************************************************** */

# ifndef NULL
#  define NULL 0
# endif

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE -1
# endif

/* ************************************************************************** */

struct s_stack
{
	int		elem;
	int		index;
};

struct s_node
{
	t_node	*next;
	void	*elem;
};

struct s_llst
{
	t_cons	del;
	t_node	*first;
	t_ui64	size;
};

/* ************************************************************************** */

t_stack		*lst_lstlast(t_stack *stack);/* almost useless */
t_stack		*node_first(t_stack *stack);/* almost useless */
t_stack		*lst_new(int content);
void		lst_clear(t_stack *lst, void (*del)(void*));
void		lst_add_front(t_stack *lst, t_stack *new);
void		lst_add_back(t_stack *lst, t_stack *new);
void		lst_delone(t_stack *lst, void (*del)(void*));
int			shift(t_stack *stack);
int			reverseshift(t_stack *stack);
t_ui64		lst_size(t_stack *lst);
void		lst_foreach(t_llst *linked_list, t_cons fun);
void		lst_foreachduo(t_llst *linked_list, t_dcons fun, void *param);
void		node_clear(t_node *node);
void		llst_clear(t_llst *linked_list);

#endif
