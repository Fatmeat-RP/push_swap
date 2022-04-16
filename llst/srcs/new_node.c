#include <stack.h>

t_node	*new_node_2(int	elem, t_node *next)
{
	t_node	*entry;

	entry = malloc(sizeof(t_node));
	if (!entry)
	{
		free(next);
		return (NULL);
	}
	entry->elem = elem;
	entry->next = next;
	return (entry);
}

t_node	*new_node(int value)
{
	return (new_node_2(value, NULL));
}