#ifndef STACK_H
# define STACK_H

typedef struct s_stack t_stack;
typedef struct s_node t_node;
typedef unsigned long t_lp64;
typedef unsigned int t_ui64;
typedef	void	(*t_dcons)(void *, void *);
typedef void	(*t_cons)(void *);

struct s_stack
{
	int		elem;
	int		index;
	int		weight;
};

struct s_node
{
	t_node	*next;
	void	*elem;
};

struct s_lst
{
	t_cons	del;
	t_node	*first;
	t_ui64	size;
};

t_stack		*lst_lstlast(t_stack *stack);
t_stack		*lst_first(t_stack *stack);
t_stack		*lst_new(int content);
void		lst_clear(t_stack *lst, void (*del)(void*));
void		lst_add_front(t_stack *lst, t_stack *new);
void		lst_add_back(t_stack *lst, t_stack *new);
void		lst_delone(t_stack *lst, void (*del)(void*));
int			shift(t_stack *stack);
int			reverseshift(t_stack *stack);
t_ui64		lst_size(t_stack *lst);
void		lst_foreach()

#endif
