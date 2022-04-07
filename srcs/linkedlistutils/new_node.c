#include <stack.h>

t_node	*ft_lstnew(void *content)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	if (!init_node(new_node))
		return (NULL);
	return (new_node);
}