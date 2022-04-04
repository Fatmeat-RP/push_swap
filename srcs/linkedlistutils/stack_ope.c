#include <push_swap.h>

t_stack	*ft_lstnew(int content)
{
	t_stack	*lst;

	lst = (t_stack *)malloc(sizeof(t_stack));
	if (!lst)
		return (NULL);
	lst->elem = content;
	lst->next = NULL;
	lst->prev = NULL;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	long	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	long	i;

	i = 0;
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}


void	ft_lstclear(t_stack *lst, void (*del)(void*))
{
	t_stack	*p;

	while (lst)
	{
		p = (lst)->next;
		ft_lstdelone(lst, del);
		lst = p;
	}
}
