#include <stack.h>

t_stack	*ft_lstfirst(t_stack *lst)
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