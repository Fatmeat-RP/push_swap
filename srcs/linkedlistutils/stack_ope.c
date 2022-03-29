#include <push_swap.h>

t_stack	*ft_lstnew(void *content)
{
	t_stack	*lst;

	lst = (t_list *) malloc (sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	lst->prev = NULL;
	return (lst);
}

int	ft_lstsize(t_list *lst)
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

void	ft_lstclear(t_stack **lst, void (*del)(void*))
{
	t_stack	*p;

	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
}
