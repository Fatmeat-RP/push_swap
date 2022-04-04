#include <stack.h>

t_node	*ft_lstlast(t_node *node)
{
	while (node->next)
		node = node->next;
	return (node);
}
