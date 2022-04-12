#include <stack.h>

t_node	*new_node_2(void *elem, t_node *next, t_cons delete)
{
	t_node	*entry;

	entry = malloc(sizeof(t_node));
	if (!entry)
	{
		if (next)
			delete(next->elem);
		free(next);
		return (NULL);
	}
	entry->elem = elem;
	entry->next = next;
	return (entry);
}

t_node	*new_node(void *value)
{
	return (new_node_2(value, NULL, NULL));
}