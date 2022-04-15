#include <push_swap.h>

t_llst	*init_index(t_llst *stack_a)
{
	t_node	*ref;
	t_node	*start;
	int		index;

	ref = stack_a->first;
	index = 0;
	while (ref)
	{
		start = stack_a->first;
		index = 0;
		while (start)
		{
			if (ref->elem > start->elem)
			{
				index++;
				ref->index = index;
			}
			start = start->next;
		}
		ref = ref->next;
	}
	return (*stack_a);
}

size_t	max_bit_len(long long nb)
{
	size_t	lb;

	lb = 32;
	while (lb != 0)
	{
		if (nb >> (lb - 1) & 1)
			return (lb);
		lb--;
	}
	return (lb);
}