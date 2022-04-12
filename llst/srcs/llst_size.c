#include <stack.h>

t_node	*ft_lstlast(t_node *node)
{
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}

int	ft_lstsize(t_node *node)
{
	int	i;

	i = 0;
	if (!node)
		return (-1);
	while (node->next)
		i++;
	return (i);
}