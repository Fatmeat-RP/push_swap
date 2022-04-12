/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarle-m <acarle-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:36:01 by acarle-m          #+#    #+#             */
/*   Updated: 2022/04/12 17:39:07 by acarle-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

/* ************************************************************************** */

# include <stdlib.h>

/* ************************************************************************** */

typedef struct s_stack t_stack;
typedef struct s_llst t_llst;
typedef struct s_node t_node;
typedef unsigned long t_lp64;
typedef unsigned int t_ui64;
typedef void (*t_dcons)(void *, void *);
typedef void (*t_cons)(void *);

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
	t_stack	*elem;
};

struct s_llst
{
	t_cons	del;
	t_node	*first;
	t_node	*last;
	size_t	size;
};

/* ************************************************************************** */

t_llst		*lst_init(t_cons del);
t_node 		*node_init(t_node *node);
t_node		*ft_lstlast(t_node *node);
t_node		*new_node(void *value);
t_node		*new_node_2(void *elem, t_node *next, t_cons delete);
t_stack		*stack_init(t_stack *stack);
void		lst_clear(t_stack *lst, void (*del)(void*));
void		ft_lstadd_front(t_llst *linked_list, t_node *new);
void		ft_lstadd_back(t_llst *linked_list, t_node *new);
int			ft_lstsize(t_node *node);
void		lst_foreach(t_llst *linked_list, t_cons fun);
void		lst_foreachduo(t_llst *linked_list, t_dcons fun, void *param);
void		node_clear(t_node *node);
void		llst_clear(t_llst *linked_list);
int			lst_not_empty(t_llst *linked_list);
int			lst_is_empty(t_llst *linked_list);

#endif
