#include <push_swap.h>

void	push_front(t_stack *stack_from, t_stack *stack_to)
{
	t_stack	*stack;

//	stack = ft_lstpop(stack_from);
	(void)stack;
//	ft_lstadd_front(stack, stack_to);
}

void	ft_lstdelone(t_stack *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->elem);
		free(lst);
	}
}

void	ft_lstadd_front(t_llst *lst, t_node *new)
{
	new->next = lst;
	lst->first = new;
}

void	ft_lstadd_back(t_llst *lst, t_node *new)
{
	t_node	*p;

	if (!lst)
		lst->first = new;
	else
	{
		p = ft_lstlast(lst->first);
		p->next = new;
	}
}