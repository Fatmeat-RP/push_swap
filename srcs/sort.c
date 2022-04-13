#include <push_swap.h>

//void	sort(t_stack *stack_a, t_stack *stack_b, int stack_size)
//{
//	int	i;
//	int	j;
//	int	num;
//
//	i = 0;
//	if (sorted(stack_a, stack_size) || stack_size <= 0)
//			return ;
//	while (!sorted(stack_a, stack_size))
//	{
//		j = 0;
//		while(j < stack_size)
//		{
//			num = stack_a->elem;
//			if ((num >> i) & 1)
//				ra();
//			else
//				pb();
//			j++;
//		}
//		while (!empty(stack_b))
//			pa();
//		i++;
//	}
//}

int	sorted(t_node *stack, size_t stack_size)
{
	t_node	*tmp;
	size_t	i;

	i = 0;
	tmp = stack;
	(void)tmp;
	while (stack->next && (i < stack_size))
	{
		if (stack->elem->index > stack->next->elem->index)
			return (-1);
		stack = stack->next;
		i++;
	}
	return (1);
}