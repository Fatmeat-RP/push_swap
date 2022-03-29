#include <push_swap.h>

int	push_front(t_stack **stack_from, t_stack **stack_to)
{
}

void	ft_lstdelone(t_stack *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*p;

	if (!*lst)
		*lst = new;
	else
	{
		p = ft_lstlast(*lst);
		p->next = new;
	}
}